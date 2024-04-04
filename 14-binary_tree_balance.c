#include "binary_trees.h"


/**
  * _heighter - Gets max height of tree
  *
  * @tree: tree
  *
  * Return: max height
  */
int _heighter(const binary_tree_t *tree)
{
	int left;
	int right;

	left = 0;
	right = 0;

	if (tree->left)
		left = _heighter(tree->left);
	if (tree->right)
		right = _heighter(tree->right);

	if (!right && !left)
		return (1);
	if (right > left)
		return (right + 1);
	return (left + 1);
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
		left = _heighter(tree->left);
	if (tree->right)
		right = _heighter(tree->right);

	return (left - right);
}
