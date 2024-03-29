#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if the root is a node
 * @node: node for checking
 * Return: 0 for not a root or 1 for root
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);
	return (1);
}
