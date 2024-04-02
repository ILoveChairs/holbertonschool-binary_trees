#include "binary_trees.h"



/**
 * binary_tree_insert_right - asdfg
 *
 * @parent: asdfg
 *
 * @value: asdfg
 *
 * Return: asdfg
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (!parent)
	{
		return (NULL);
	}
	new = binary_tree_node(parent, value);

	if (!new)
	{
		return (NULL);
	}

	if (parent->right)
	{
		new->left = parent->left;
		(parent->right)->parent = new;
	}
return (new);
}
