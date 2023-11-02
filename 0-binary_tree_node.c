#include "binary_trees.h"

/**
 * binary_tree_node - function that creates a binary tree node
 *
 *@parent: a pointer to the parent node of the node to create
 *@value: a pointer to the parent node of the node to create
 *
 *Return: pointer to the node / NULL on failure
 */


binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node = (binary_tree_t *)malloc(sizeof(binary_tree_t));

	if (!node)
	{
		return (NULL);
	}

	node->parent = parent;
	node->left = NULL;
	node->right = NULL;
	node->n = value;

	return (node);
}
