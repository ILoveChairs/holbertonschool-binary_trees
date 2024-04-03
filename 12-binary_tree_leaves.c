#include "binary_trees.h"

/**
 * _counter - asdfg
 *
 * @tree: asdfg
 *
 * Return: asdfg
 */
size_t _counter(const binary_tree_t *tree)
{
	size_t left;
	size_t right;

	if (tree->left)
		left = _counter(tree->left);
	else
		left = 0;

	if (tree->right)
		right = _counter(tree->right);
	else
		right = 0;

	if ((left == 0) && (right == 0))
		return (1);

	return (left + right);
}

/**
 * binary_tree_leaves - asdfg
 *
 * @tree: asdfg
 *
 * Return: asdfg
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (_counter(tree));
}


