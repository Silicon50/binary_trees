#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node to the left
  * @parent: The parent of the binary tree node.
 * @value: The value to be inserted.
 * Return: A pointer to node on success,failure NULL.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_right = NULL;

	if (parent == NULL)
	{
		return (NULL);
	}

	new_right = binary_tree_node(parent, value);
	if (new_right == NULL)
	{
		return (NULL);
	}
	new_right->right = parent->right;

	if (parent->right)
	{
		parent->right->parent = new_right;
	}
	parent->right = new_right;
	return (new_right);
}
