#include "binary_trees.h"

/**
 * _sizer - asdfg
 *
 * @tree: asdfg
 *
 * Return: asdf
 */
size_t _sizer(const binary_tree_t *tree)
{
	size_t left;
	size_t right;

	if (tree->right)
		right = _sizer(tree->right);
	else
		right = 0;

	if (tree->left)
		left = _sizer(tree->left);
	else
		left = 0;

	return (right + left + 1);
}

/**
 * binary_tree_size - asdfg
 *
 * @tree: asdfg
 *
 * Return: asdfg
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (_sizer(tree));
}


