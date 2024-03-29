#include "binary_trees.h"
/**
 * binary_tree_preorder - using pre-order traversal to print functions
 * @tree: tree to print elements
 * @func: function used
 * Return: no 
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}
	else
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
