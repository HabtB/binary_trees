#include "binary_trees.h"

/**
* binary_tree_leaves - counts the number of leaves of a tress
*
* @tree: the pointer to a tree for which the number of leaves to be counted
*
* Return: returns the number of leaves of the tree
*/

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);
	else
		return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
