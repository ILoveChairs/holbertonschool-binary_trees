#include "binary_trees.h"

/**
 * _counter - Counts n of nodes.
 *
 * @tree: Root node.
 *
 * Return: n of nodes.
 */
int _counter(const binary_tree_t *tree)
{
	int left;
	int right;

	left = 0;
	right = 0;

	if (tree->left)
		left = _count(tree->left);
	if (tree->right)
		right = _count(tree->right);

	return (left + right);
}

/**
 * binary_tree_balance - asdfg
 *
 * @tree: asdfg
 *
 * Return: asdfg
 */
int binary_tree_balance(const binary_tree_t *tree)
{




}


