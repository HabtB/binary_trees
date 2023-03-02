#include "binary_trees.h"

/**
* binary_tree_balance - measures the balance factor of binary tree
*
* @tree: is a pointer to the root of the tree to measure the balance factor
* Return: returns 0 if the tree is NULL otherwise returns the balance factor
*/

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	
	int height_left, height_right;

	height_left = 0;
	height_right = 0;

	if (tree->left)
		height_left = 1 + binary_tree_balance(tree->left);
	if (tree->right)
		height_right = 1 + binary_tree_balance(tree->right);

	return (height_left - height_right);
}
