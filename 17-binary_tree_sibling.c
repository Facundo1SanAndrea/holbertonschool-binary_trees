#include "binary_trees.h"

/**
* binary_tree_sibling - sibling of a node
* @node:is a pointer
* Return:no sibling or the node is null return NULL
*/

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);
	if (node == node->parent->right)
		return (node->parent->left);
	return (node->parent->right);
}
