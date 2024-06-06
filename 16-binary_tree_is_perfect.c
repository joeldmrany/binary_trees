#include "binary_trees.h"
/**
 * binary_tree_is_leaf - return 1 if the node is root
 * @node: node to check
 * Return: 1 or 0
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}

	if (node->left == NULL && node->right == NULL)
	{
		return (1);
	}
	return (0);
}

/**
 * binary_tree_is_perfect - check if the tree is perfect
 * @tree: pointer to the node to check
 * Return: 1 or 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	if (binary_tree_is_leaf(tree->left) != binary_tree_is_leaf(tree->right))
	{
		return (0);
	}

	if (binary_tree_is_leaf(tree->left) && binary_tree_is_leaf(tree->right))
	{
		return (1);
	}

	if (tree->left != NULL && tree->right != NULL)
	{
		return (binary_tree_is_perfect(tree->left) &&
		binary_tree_is_perfect(tree->right));
	}

	return (0);
}
