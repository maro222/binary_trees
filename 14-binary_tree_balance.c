#include "binary_trees.h"

/**
 *binary_tree_balance - func that measures the balance factor of a binary tree
 *
 *@tree: pointer to the root node of the tree to measure the balance factor
 *
 *Return: return the balance factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (0);

	left = height(tree->left);
	right = height(tree->right);

	return (left - right);
}

/**
 *height - auxilary function to measures the height
 *@tree: pointer to the root node of the tree to measure the balance factor
 *Return: height of the tree
 */

int height(const binary_tree_t *tree)
{
	int left_h = 0;
	int right_h = 0;

	if (!tree || (!tree->left && !tree->right))
		return (0);

	left_h = binary_tree_height(tree->left);
	right_h = binary_tree_height(tree->right);

	if (left_h > right_h)
		return (1 + left_h);
	else
		return (1 + right_h);
}
