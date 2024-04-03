#include "binary_trees.h"
#include <stdlib.h>


/**
 * binary_tree_delete- asdfg
 *
 * @tree: asdfg
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree->left)
		binary_tree_delete(tree->left); //borrar izq
	if (tree->right)
		binary_tree_delete(tree->right); // borrar derecha
	free(tree);
}


