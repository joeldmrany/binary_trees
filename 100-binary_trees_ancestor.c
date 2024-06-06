#include "binary_trees.h"

/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 * @first: pointer to the first node
 * @second: pointer to the second node
 * Return: pointer to the lowest common
 * ancestor node of the two given nodes
 * or NULL if no common ancestor was found
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
	binary_tree_t *parent1, *parent2;

	if (first == NULL || second == NULL)
	{
		return (NULL);
	}

	if (first == second)
	{
		return ((binary_tree_t *)first);
	}

	parent1 = first->parent;
	parent2 = second->parent;

	if (first == parent2 || !parent1 || (!parent1->parent && parent1 != second))
	{
		return (binary_trees_ancestor(first, parent2));
	}
	else if (second == parent1 || !parent2 || (!parent2->parent && parent2 != first))
	{
		return (binary_trees_ancestor(parent1, second));
	}

	return (binary_trees_ancestor(parent1, parent2));
}