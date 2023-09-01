#include "binary_trees.h"

/**
 * binary_tree_is_root - a node is a root
 * @node: pointer to the node
 * Return: 1 if root
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node || node->parent)
		return (0);

	return (1);
}