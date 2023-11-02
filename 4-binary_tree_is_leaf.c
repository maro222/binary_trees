#include "binary_trees.h"

/**
 *binary_tree_is_leaf - function that checks if a node is a leaf
 *
 * @node:  a pointer to the node to check
 *Return: 1 for leaf , 0 otherwise
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (!node->left && !node->right)
		return (0);
	return (1);
}
