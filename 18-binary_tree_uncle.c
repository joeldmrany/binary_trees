#include "binary_trees.h"
/**
 * binary_tree_uncle - checks for the uncle of a node
 * @node: node to check
 * Return: nil or node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL)
	{
		return (NULL);
	}
	if (node->parent == NULL || node->parent->parent == NULL)
	{
		return (NULL);
	}

	binary_tree_t *parent = node->parent;

	binary_tree_t *grandparent = parent->parent;

	if (grandparent->left == parent)
	{
		return (grandparent->right);
	}

	return (grandparent->left);
}
