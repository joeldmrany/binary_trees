#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if a node is a leaf
 * @node: node to check
 * Return: 1 if the node is a leaf, 0 otherwise
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}
	return (node->left == NULL && node->right == NULL);
}

/**
 * tree_depth - measures the depth of a tree
 * @tree: pointer to the root node of the tree
 * Return: depth of the tree
 */
int tree_depth(const binary_tree_t *tree)
{
	int depth = 0;

	while (tree)
	{
	depth++;
	tree = tree->left;
	}
	return (depth);
}

/**
 * is_perfect_recursive - checks if a tree is perfect recursively
 * @tree: pointer to the root node of the tree to check
 * @depth: depth of the tree
 * @level: current level of the tree
 * Return: 1 if the tree is perfect, 0 otherwise
 */
int is_perfect_recursive(const binary_tree_t *tree, int depth, int level)
{
	if (tree == NULL)
	{
		return (1);
	}

	if (binary_tree_is_leaf(tree))
	{
		return (depth == level + 1);
	}

	if (tree->left == NULL || tree->right == NULL)
	{
		return (0);
	}

	return (is_perfect_recursive(tree->left, depth, level + 1) &&
		is_perfect_recursive(tree->right, depth, level + 1));
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if the tree is perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int depth;

	if (tree == NULL)
	{
		return (0);
	}

	depth = tree_depth(tree);
	return (is_perfect_recursive(tree, depth, 0));
}
