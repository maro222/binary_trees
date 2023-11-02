#include "binary_trees.h"

/**
 *binary_tree_nodes - function that counts the nodes
 *			with at least 1 child in a binary tree
 *
 *@tree: a pointer to the root node of the tree to count the number of nodes
 *
 *Return: number of nodes has 1 child
 */

int binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left_n = 0, right_n = 0;

	if (!tree)
		return (0);

	left_n = binary_tree_nodes(tree->left);
	right_n = binary_tree_nodes(tree->right);

	if (tree->left && tree->right)
		return (0);
	else if (!tree->left && !tree->right)
		return (0);
	else
		return (1);

}
