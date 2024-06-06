#include "binary_trees.h"

/**
 * is-leaf - checks for leaf node
 * @node: pointer to leaf node
 * Return: return if node is leaf
*/
bool is_leaf(binary_tree_t *node)
{
	return (node == NULL ||
	(node->left == NULL && node->right == NULL));
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

	if (is_leaf(tree->left) != is_leaf(tree->right))
	{
		return (0);
	}
	if (is_leaf(tree->left))
	{
		return (1);
	}
	else
	{
		return (binary_tree_is_perfect(tree->left) &&
		binary_tree_is_perfect(tree->right));
	}

	return (0);
}
