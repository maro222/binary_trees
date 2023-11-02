#include "binary_trees.h"

/**
 *binary_tree_leaves - function that counts the leaves in a binary tree
 *
 *@tree: pointer to the root node of the tree to count the number of leaves
 *
 *Return: leaves of tree
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left_l = 0, right_l = 0;

	if (!tree)
		return (0);

	left_l = binary_tree_leaves(tree->left);
	right_l = binary_tree_leaves(tree->right);

	if (left_l == 0 && right_l == 0)
		return (1);
	else
		return (left_l + right_l);
}
