#include "binary_trees.h"

/**
* binary_tree_depth - is a function that measures the depth of the a node
*
* @tree: is a pointer to the node to measure its depth
* Return: returns the depth of the node
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	size_t node_depth = 0;

	if (tree->parent)
		node_depth = 1 + binary_tree_depth(tree->parent);

	return (node_depth);
}
