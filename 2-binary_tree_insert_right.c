#include "binary_trees.h"

/**
 *binary_tree_insert_right - function that inserts a node as
 *                              the right-child of another node
 *
 *@parent: a pointer to the node to insert the left-child in
 *@value: the value to store in the new node
 *
 *Return: a pointer to the created node,
 *         or NULL on failure or if parent is NULL
 *
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL;

	if (!parent)
		return (NULL);

	node = binary_tree_node(parent, value);

	if (!node)
		return (NULL);

	if (parent->right)
	{
		node->right = parent->right;
		parent->right = node;
		node->right->parent = node;
	}
	else
	{
		parent->right = node;
	}

	return (node);
}
