#include "binary_trees.h"
#include <stdlib.h>


/**
 * _heighter - asdfg
 *
 * @tree: asdfg
 *
 * @h: asdfg
 *
 * Return: asdfg
 */
size_t _heighter(const binary_tree_t *tree, size_t h)
{
	size_t left;
	size_t right;

	if (tree->left)
		left = _heighter(tree->left, h + 1);
	else
		left = h;

	if (tree->right)
		right = _heighter(tree->right, h + 1);
	else
		right = h;

	if (left > right)
		return (left);

	return (right);
}

/**
 * binary_tree_height- asdfg
 *
 * @tree: asdfg
 *
 * Return: asdfg
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (_heighter(tree, 0));
}


