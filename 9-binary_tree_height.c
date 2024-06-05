#include "binary_trees.h"
/**
 * binary_tree_height - function that measures the height of a binary tree
 *
 * @tree: pointer to root
 *
 * Return: height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lh, rh, th;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left == NULL && tree->right == NULL)
	{
		return (0);
	}

	lh = binary_tree_height(tree->left);

	rh = binary_tree_height(tree->right);

	th = ((lh > rh ? lh : rh) + 1);

	return (th);
}
