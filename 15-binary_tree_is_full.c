#include "binary_tree.h"

/**
* binary_tree_is_full - checks if the binary tree if full
* (or if all the nodes have either two or 0 children)
*
* @tree: is a pointer to the root of the node
* Return: return 0 if tree is full or null but 1 otherwise
*/

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!tree->right && !tree->left)
		return (1);

	if (tree->right && tree->left)
		return (binary_tree_is_full(tree->left) &&
			binary_tree_is_full(tree->right));

	return (0);
}
