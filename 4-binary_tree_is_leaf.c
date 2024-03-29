#include "binary_trees.h"
/**
 * binary_tree_is_leaf - understand if a node is a leaf
 * @node: node to investigate
 * Return: 1 for leaf and 0 for not leaf
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->left == NULL && node->right == NULL)
		return (1);
	return (0);
}
