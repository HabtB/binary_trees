#include "binary_trees.h"

/**
* binary_tree_height - is a function that measures the size of the tree
*
* @tree: is a pointer to the root node
* Return: returns the size of the treer
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	size_t left_height = 0;
	size_t right_height = 0;

	left_height = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	right_height = tree->right ? 1 + binary_tree_height(tree->right) : 0;

	return (left_height > right_height ? left_height: right_height);
}
