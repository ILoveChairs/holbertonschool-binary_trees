#include "binary_trees.h"



/**
 * binary_tree_inorder - asdfg
 *
 * @tree: asdfg
 *
 * @func: asdfg
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	func(tree->n);

	if (tree->right)
		binary_tree_preorder(tree->right, func);

	if (tree->left)
		binary_tree_preorder(tree->left, func);
}


