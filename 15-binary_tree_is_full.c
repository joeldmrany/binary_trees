#include "binary_trees.h"
/**
 * binary_tree_is_full - checks if the binary tree is full
 * @tree: pointer to the node to check
 * Return: 1 or 0
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	if (tree->right == NULL && tree->left == NULL)
	{
		return (1);
	}

	if (tree->right != NULL && tree->left != NULL)
	{
		return (binary_tree_is_full(tree->left) &&
		binary_tree_is_full(tree->right));
	}
	return (0);
}
