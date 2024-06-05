#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_inorder - it is function that goes through binary tree using in-order traversal
 *
 * @tree: pointer to root
 * @func: pointer to function
 *
 * Return: void
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

