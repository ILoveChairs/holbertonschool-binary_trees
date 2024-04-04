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
		left = _counter(tree->left);
	if (tree->right)
		right = _counter(tree->right);

	return (left + right + 1);
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

	int left;
	int right;

	if (tree == NULL)
	{
		return (0);
	}

	left = 0;
	right = 0;

	if (tree->left)
		left = _counter(tree->left);
	if (tree->right)
		right = _counter(tree->right);

	return (left - right);

}
