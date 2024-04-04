#include "binary_trees.h"

/**
 * _perfecter - asdfg
 *
 * @tree: asdfg
 * @h: asdfg
 *
 * Return: asdfg
 */
int _perfecter(const binary_tree_t *tree, int *h)
{
	int left;
	int right;
	int h_original;
	int h_left;
	int h_right;

	if ((tree->left || tree->right))
	{
		if (!(tree->left && tree->right))
			return (0);
	}

	else if (!tree->left && !tree->right)
		return (1);

	h_original = *h;
	*h += 1;
	left = _perfecter(tree->left, h);
	h_left = *h;

	*h = h_original;
	*h += 1;
	right = _perfecter(tree->right, h);
	h_right = *h;

	*h = h_original - 1;

	if (!(left && right))
		return (0);
	if (h_left != h_right)
		return (0);
	return (1);
}

/**
 * binary_tree_is_perfect - asdfg
 *
 * @tree: asdfg
 *
 * Return: asdfg
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int h;

	if (!tree)
		return (0);

	h = 0;
	return (_perfecter(tree, &h));
}


