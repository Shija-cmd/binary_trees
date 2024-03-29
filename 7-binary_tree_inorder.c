#include "binary_trees.h"
/**
 * binary_tree_inorder - using in-order traversal to print elements
 * @tree: tree to print elements
 * @func: function for using
 * Return: no
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}
	else
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
