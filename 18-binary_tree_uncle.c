#include "binary_trees.h"



/**
 * binary_tree_uncle - asdfg
 *
 * @node: asdfg
 *
 * Return: asdfg
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node)
		return (NULL);

	if (!node->parent)
		return (NULL);

	node = node->parent;

	if (!node->parent)
		return (NULL);

	if ((node->parent)->left == node)
		return ((node->parent)->right);

	return ((node->parent)->left);
}


