#include "binary_trees.h"

/**
 *binary_tree_is_root - function that checks if a given node is a root
 *
 *@node: a pointer to the node to check
 *
 *Return: 1 on root, 0 otherwise
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (root->parent)
		return (0);
	return (1);
}
