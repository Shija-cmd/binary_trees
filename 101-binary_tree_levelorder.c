#include "binary_trees.h"
/**
 * height_binary_tree - Measures the height
 * @tree: tree to measure
 * Return: If tree or func is NULL, do nothing
 */
size_t height_binary_tree(const binary_tree_t *tree)
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
			p = tree->left ? 1 + height_binary_tree(tree->left) : 0;
			q = tree->right ? 1 + height_binary_tree(tree->right) : 0;
		}
		return ((p > q) ? p : q);
	}
}
/**
 * depth_binary_tree - function to check the depth of binary tree
 * @tree: node checking the depth
 * Return: If tree or func is NULL, do nothing  
 */
size_t depth_binary_tree(const binary_tree_t *tree)
{
	return ((tree && tree->parent) ? 1 + depth_binary_tree(tree->parent) : 0);
}
/**
 * linked - function makes a linked list
 * @head: pointer
 * @tree: node 
 * @level: depth
 * Return: No
 */
void linked(link_t **head, const binary_tree_t *tree, size_t level)
{
	link_t *new, *aux;

	new = malloc(sizeof(link_t));
	if (new == NULL)
	{
		return;
	}
	new->n = level;
	new->node = tree;
	if (*head == NULL)
	{
		new->next = NULL;
		*head = new;
	}
	else
	{
		aux = *head;
		while (aux->next != NULL)
		{
			aux = aux->next;
		}
		new->next = NULL;
		aux->next = new;
	}
}
/**
 * recurse - recursion
 * @head: pointer
 * @tree: node 
 * Return: Nothing
 */
void recurse(link_t **head, const binary_tree_t *tree)
{
	size_t level = 0;

	if (tree != NULL)
	{
		level = depth_binary_tree(tree);
		linked(head, tree, level);
		recurse(head, tree->left);
		recurse(head, tree->right);
	}
}
/**
 * binary_tree_levelorder - print the elements
 * @tree: root 
 * @func: function
 * Return: No
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	link_t *head, *aux;
	size_t height = 0, count = 0;

	if (!tree || !func)
	{
		return;
	}
	else
	{
		height = height_binary_tree(tree);
		head = NULL;
		recurse(&head, tree);
		while (count <= height)
		{
			aux = head;
			while (aux != NULL)
			{
				if (count == aux->n)
				{
					func(aux->node->n);
				}
				aux = aux->next;
			}
			count++;
		}
		while (head != NULL)
		{
			aux = head;
			head = head->next;
			free(aux);
		}
	}
}
