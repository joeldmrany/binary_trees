#include "binary_trees.h"
/**
 * height - function to measure hight of the tree
 *
 * @tree: pointer to root
 *
 * Return: the hight of the node
 */
int height(const binary_tree_t *tree)
{
	int left, right;

	left = 0;
	right = 0;
	if (tree == NULL)
		return (-1);
	left += height(tree->left);
	right += height(tree->right);
	return (1 + (left > right ? left : right));
}
/**
 * binary_tree_balance - function to measure balance factor of a binary_tree
 *
 * @tree: pointer to root
 *
 * Return: balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left, right, B_factor;

	left = height(tree->left);
	right = height(tree->right);
	if (tree == NULL)
		return (0);
	B_factor = left - right;
	return (B_factor);
}
