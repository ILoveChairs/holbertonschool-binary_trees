#include "binary_trees.h"

/**
 * binary_tree_node - it a function that generate a new node in a binary tree
 * @value: return the value of the node
 * @parent: is the pointer to the parent node
 * Return: return the pointer r
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *r;

	r = malloc(sizeof(binary_tree_t));

	if (r == NULL)
	{
		return (NULL);
	}

	r->right = NULL;
	r->left = NULL;
	r->parent = parent;
	r->n = value;

return (r);
}
