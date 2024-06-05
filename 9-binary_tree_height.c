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
	int h;

	h = 0;
	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left != NULL)
	{
		h++;
		binary_tree_height(tree->left);
	}
	if (tree->right != NULL)
	{
		h++;
		binary_tree_height(tree->right);
	}
	return (h);
}
