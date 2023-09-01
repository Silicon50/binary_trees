#include "binary_trees.h"

/**
 * binary_tree_delete - deletes a binary tree
 * @tree: tree to deleted
 */
void binary_tree_delete(binary_tree_t *tree)
{
	free(tree);
}