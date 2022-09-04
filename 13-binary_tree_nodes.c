#include "binary_trees.h"
/**
 *binary_tree_nodes - a function that counts the nodes
 *@tree: pointer node
 *Return: counter
 *
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t child = 0;

	if (!tree)
		return (0);
	if (tree->left || tree->right)
		child = 1;
	return (binary_tree_nodes(tree->left) +
		binary_tree_nodes(tree->right) + child);
}
