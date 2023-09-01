#include "binary_trees.h"

/**
 * binary_tree_depth - get the depth of a node in a binary tree
 * @tree: pointer to node to meausure the depth
 * Return: node depth or 0 if tree is NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t total_depth;
	size_t depth = 0;

	if (!tree || (tree->parent == NULL))
		return (0);

	depth = binary_tree_depth(tree->parent);
	total_depth = depth + 1;

	return (total_depth);
}
