#include "binary_trees.h"
/**
 * binary_tree_is_leaf - return 1 if the node is root
 * @root: node to check
 * Return: 1 or 0
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}

	if (node->parent == NULL)
	{
		return (1);
	}

	return (0);
}