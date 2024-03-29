#include "binary_trees.h"
/**
 * binary_tree_size - is a function to measure the size
 * @tree: tree to be measured
 * Return: if tree is NULL, the function must return 0
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0, q = 0, p = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		p = binary_tree_size(tree->left);
		q = binary_tree_size(tree->right);
		size = q + p + 1;
	}
	return (size);
}
