#include "binary_trees.h"
/**
 * binary_tree_depth - height of node from root
 * @tree: node to find height
 * Return: 0 if it is the root or number of height
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}
