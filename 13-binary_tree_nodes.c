#include "binary_trees.h"

/**
* binary_tree_nodes - counts the number of nodes with only one leaf
*
* @tree: the pointer to a tree for which the number of nodes with one leaf
* to be counted
*
* Return: returns the number of leaves of the tree
*/

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (tree->left == NULL || tree->right == NULL)
		return (1);
	else
		return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
}
