#include "binary_trees.h"
/**
 * binary_tree_height - is a function to measure the balance factor
 * @tree: tree to measure
 * Return: If tree is NULL, return 0
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
			p = tree->left ? 1 + binary_tree_height(tree->left) : 1;
			q = tree->right ? 1 + binary_tree_height(tree->right) : 1;
		}
		return ((p > q) ? p : q);
	}
}

/**
 * binary_tree_balance - is a function to measure the balance factor 
 * @tree: tree to measure
 * Return: If tree is NULL, return 0   
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int right = 0, left = 0, total = 0;

	if (tree)
	{
		left = ((int)binary_tree_height(tree->left));
		right = ((int)binary_tree_height(tree->right));
		total = left - right;
	}
	return (total);
}
