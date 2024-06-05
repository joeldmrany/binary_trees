#include "binary_trees.h"
/**
 * binary_tree_depth - measure depth of the node
 *
 * @tree: pointer to root
 *
 * Return: depth of the node
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	int d;

	d = 0;

	if (tree == NULL)
	{
		return (0);
	}
	while (tree->parent != NULL)
	{
		d++;

		tree = tree->parent;
	}
	return (d);
}
