#include "binary_trees.h"


/**
 * _lowest - asdfg
 *
 * @tree: asdfg
 *
 * Return: asdfg
 */
static int _lowest(const binary_tree_t *tree)
{
	int middle;
	int left;
	int right;

	if (!(tree->left || tree->right))
		return (tree->n);

	middle = tree->n;
	if (tree->left)
	{
		left = _lowest(tree->left);
		if (!tree->right)
			return (left < middle ? left : middle);
	}
	if (tree->right)
	{
		right = _lowest(tree->right);
		if (!tree->left)
			return (right < middle ? right : middle);
	}

	if (middle < left && middle < right)
		return (middle);
	else if (right < middle && right < left)
		return (left);
	return (right);
}

/**
 * _highest - asdfg
 *
 * @tree: asdfg
 *
 * Return: asdfg
 */
static int _highest(const binary_tree_t *tree)
{
	int middle;
	int left;
	int right;

	if (!(tree->left || tree->right))
		return (tree->n);

	middle = tree->n;
	if (tree->left)
	{
		left = _highest(tree->left);
		if (!tree->right)
			return (left > middle ? left : middle);
	}
	if (tree->right)
	{
		right = _highest(tree->right);
		if (!tree->left)
			return (right > middle ? right : middle);
	}

	if (middle > left && middle > right)
		return (middle);
	else if (right > middle && right > left)
		return (left);
	return (right);
}

/**
 * binary_tree_is_bst - asdfg
 *
 * @tree: asdfg
 *
 * Return: asdfg
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (tree->left)
	{
		if (_lowest(tree->left) > tree->n)
			return (0);
	}

	if (tree->right)
	{
		if (_highest(tree->right) < tree->n)
			return (0);
	}

	return (1);
}
