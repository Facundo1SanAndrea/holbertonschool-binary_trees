#include "binary_trees.h"
/**
 *binary_tree_insert_left - function that inserts a
 *node as the left-child of another node.
 *@parent: pointer to the node to insert the left-child in
 *@value: value to store in the new node
 *Return: pointer to the created node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newbranch;

	if (parent == NULL)
		return (NULL);

	newbranch = binary_tree_node(parent, value);

	if (!newbranch)
		return (NULL);

	if (parent->left == NULL)
		parent->left = newbranch;
	else
	{
		newbranch->left = parent->left;
		parent->left->parent = newbranch;
		parent->left = newbranch;
	}
	return (newbranch);
}
