#include "binary_trees.h"

/**
 *binary_tree_t - function that creates a binary tree node
 *@parent: pointer to the parent node
 *@value: value put to the new node
 *Return: pointer to new node.
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newbranch;

	newbranch = malloc(sizeof(binary_tree_t));

	if (!newbranch)
		return (NULL);

	newbranch->n = value;

	if (!parent)
		newbranch->parent = NULL;
	else
		newbranch->parent = parent;

	newbranch->left = NULL;
	newbranch->right = NULL;

	return (newbranch);
}
