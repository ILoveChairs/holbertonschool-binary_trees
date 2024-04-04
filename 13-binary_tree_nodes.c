#include "binary_trees.h"

/**
 * _counter - asdfg
 *
 * @tree: asdfg
 * @count: asdfg
 *
 * Return: asdfg
 */
size_t _counter(const binary_tree_t *tree, size_t *count)
{
	if (tree->left)
		_counter(tree->left, count);
	if (tree->right)
		_counter(tree->right, count);

	if (tree->left || tree->right)
		*count += 1;

	return (*count);
}

/**
 * binary_tree_nodes - asdfg
 *
 * @tree: asdfg
 *
 * Return: asdfg
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count;

	if (!tree)
		return (0);

	count = 0;

	_counter(tree, &count);

	return (count);
}


