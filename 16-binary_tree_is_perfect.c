#include "binary_trees.h"
/**
 * perfect_tree - says perfect or not perfect
 * @tree: tree to determine the perfection
 * Return: If tree is NULL, the function must return 0
 */
int perfect_tree(const binary_tree_t *tree)
{
	int p = 0, q = 0;

	if (tree->left && tree->right)
	{
		p = 1 + perfect_tree(tree->left);
		q = 1 + perfect_tree(tree->right);
		if (q == p && q != 0 && p != 0)
			return (q);
		return (0);
	}
	else if (!tree->left && !tree->right)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
/**
 * binary_tree_is_perfect - perfect or not a perfect tree
 * @tree: tree to determine the perfection
 * Return: If tree is NULL, the function must return 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int result = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		result = perfect_tree(tree);
		if (result != 0)
		{
			return (1);
		}
		return (0);
	}
}
