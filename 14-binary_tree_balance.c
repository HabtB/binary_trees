#include "binary_trees.h"

/**
 * binary_tree_height_b - Measures height of a binary tree for a bal tree
 * @tree: tree to go through
 * Return: the height
 */

size_t binary_tree_height_b(const binary_tree_t *tree)
{
	size_t l = 0;
	size_t r = 0;

	if (tree == NULL)
		return (0);
	if (tree)
	{
		l = tree->left ? 1 + binary_tree_height_b(tree->left) : 1;
		r = tree->right ? 1 + binary_tree_height_b(tree->right) : 1;
	}
	return ((l > r) ? l : r);
}

/**
* binary_tree_balance - measures the balance factor of binary tree
*
* @tree: is a pointer to the root of the tree to measure the balance factor
* Return: returns 0 if the tree is NULL otherwise returns the balance factor
*/

int binary_tree_balance(const binary_tree_t *tree)
{
	int left = 0;
	int right = 0;
	int total = 0;

	if (tree != NULL)
	{
		left = (int)binary_tree_height_b(tree->left);
		right = (int)binary_tree_height_b(tree->right);
		total = left - right;
	}
	return (total);
}
