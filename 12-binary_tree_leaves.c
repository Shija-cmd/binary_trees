#include "binary_trees.h"
/**
 * binary_tree_leaves - a function to count the number of leaves
 * @tree: tree to count
 * Return: If tree is NULL, the function must return 0
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaf = 0, p = 0, q = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		p = binary_tree_leaves(tree->left);
		q = binary_tree_leaves(tree->right);
		leaf = p + q;
		return ((!p && !q) ? leaf + 1 : leaf + 0);
	}
}
