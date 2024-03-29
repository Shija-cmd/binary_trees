#include "binary_trees.h"

/**
 * binary_tree_height - Function to measure the height of a tree
 * @tree: tree for measuring
 * Return: 0 for NULL or height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t p = 0;
	size_t q = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if (tree)
		{
			p = tree->left ? 1 + binary_tree_height(tree->left) : 0;
			q = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		}
		return ((p > q) ? p : q);
	}
}
