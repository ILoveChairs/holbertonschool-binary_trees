#include "binary_trees.h"

/**
 * _is_full - asdfg
 *
 * @left: asdfg
 * @right: asdfg
 *
 * Return: asdfg
 */
int _is_full(int left, int right)
{
	if (left && right)
		return (1);
	if (left || right)
		return (0);
	/* if !both */
	return (1);
}

/**
 * _iterator - asdfg
 *
 * @tree: asdfg
 *
 * Return: asdfg
 */
int _iterator(const binary_tree_t *tree)
{
	int left;
	int right;

	left = 0;
	right = 0;

	if (tree->left)
		left = _iterator(tree->left);
	if (tree->right)
		right = _iterator(tree->right);

	return (_is_full(left, right));
}

/**
 * binary_tree_is_full - asdfg
 *
 * @tree: asdfg
 *
 * Return: asdfg
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (_iterator(tree));
}


