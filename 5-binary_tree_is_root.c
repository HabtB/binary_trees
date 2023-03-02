#include "binary_trees.h"

/**
* binary_tree_is_root - checks if a given node is a root
*
* @node: is a pointer to the node to be checked
* Return: Returns 1 if the node is a root 0 otherwise
*/

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node && !(node->parent))
		return (1);
	else
		return (0);
}
