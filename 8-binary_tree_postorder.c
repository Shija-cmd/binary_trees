#include "binary_trees.h"
/**
 * binary_tree_postorder - using post-order traversal to print elements
 * @tree: tree to print from
 * @func: function for using
 * Return: no
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}
	else
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
	}
	func(tree->n);
}
