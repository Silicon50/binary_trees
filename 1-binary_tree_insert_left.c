#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node to the left
 * @parent: The parent of the binary tree node.
 * @value: The value to be inserted.
 * Return: A pointer to node on success,failure NULL.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_left = NULL;

	if (parent == NULL)
	{
		return (NULL);
	}

	new_left = binary_tree_node(parent, value);
	if (new_left == NULL)
	{
		return (NULL);
	}
	new_left->left = parent->left;

	if (parent->left)
	{
		parent->left->parent = new_left;
	}
	parent->left = new_left;
	return (new_left);
}
