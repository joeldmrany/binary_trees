#include "binary_trees.h"
/**
 * binary_tree_insert_left - function to insert node into left
 *
 * @parent: the parent node
 * @value: the value to put into the node
 *
 * Return: binary_tree
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = (binary_tree_t *)malloc(sizeof(binary_tree_t));

	if (new_node == NULL || parent == NULL)
	{
		return NULL;
	}

	new_node->parent = parent;

	new_node->n = value;

	new_node->left = parent->left;

	new_node->right = NULL;

	if (parent->left != NULL)
	{
		parent->left->parent = new_node;
	}

	parent->left = new_node;

	return (new_node);
}
