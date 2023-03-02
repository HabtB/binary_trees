#include "binary_trees.h"

/**
* binary_tree_delete - Deletes all the nodes in the binary tree
*
* @tree: is a pointer to the binary tree to be deleted
* Return: returns NULL if tree is NULL otherwise do nothing
*
*/

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
}
