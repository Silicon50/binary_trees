#include "binary_trees.h"

/**
 * binary_tree_leaves - get total leaves in a binary tree
 * @tree: pointer to the root node of the tree
 * to count the number of leaves
 * Return: num of leaves of 0 if tree is NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	int left, right, total;

	if (!tree)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	left = binary_tree_leaves(tree->left);
	right = binary_tree_leaves(tree->right);

	total = left + right;
	return (total);
}
