#include "binary_trees.h"

/**
 * binary_tree_node - function to creates a binary T node
 * @parent: parent node
 * @value: node value
 * Return: new node on success or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	newnode = (binary_tree_t *) malloc(sizeof(binary_tree_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->parent = parent;
	newnode->left = NULL;
	newnode->right = NULL;
	newnode->n = value;
	return (newnode);
}
