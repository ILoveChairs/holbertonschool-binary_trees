#include "binary_trees.h"



/**
 * binary_tree_postorder - asdfg
 *
 * @tree: asdfg
 *
 * @func: asdfg
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	if (tree->left)
		binary_tree_preorder(tree->left, func);

	if (tree->right)
		binary_tree_preorder(tree->right, func);

	func(tree->n);
}


