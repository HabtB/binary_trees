#include "binary_trees.h"

/**
* binary_tree_is_leaf - checks if a given node is a leaf
*
* @node: is a pointer to the node to be checked
* Return: Returns 1 if there is a node 0 otherwise
*/

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->right == NULL && node->left == NULL)
		return (1);
	else
		return (0);
}
