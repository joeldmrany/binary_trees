#include "binary_trees.h"
/**
 * binary_tree_insert_right - insert a  node at right
 * @parent: root node
 * @value: data to be inserted
 * Return: new_node
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;

	if (parent == NULL)
	{
		return (NULL);
	}

	new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->parent = parent;

	new_node->n = value;

	new_node->left = NULL;

	if (parent->right != NULL)
	{
		new_node->right = parent->right;

		parent->right->parent = new_node;
	}
	else
	{
		new_node->right = NULL;
	}

	parent->right = new_node;

	return (new_node);

}
