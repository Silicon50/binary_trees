#include "binary_trees.h"

/**
 * binary_tree_delete - deletes a binary tree
 * @tree: tree to deleted
 */
void binary_tree_delete(binary_tree_t *tree)
{
    binary_tree_delete(tree->right);
	binary_tree_delete(tree->left);
	free(tree);
}
