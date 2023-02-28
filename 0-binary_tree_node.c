#include "binary_trees.h"

/**
* binary_tree_node - Creates a function that creates a binary tree node
*
* @parent: a pointer to the parent node
* @value: the value to put in the new node
* Return: returns the created binary_tree_t node, or NULL on a failure
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	/* declaration of the new node with its data type */
	binary_tree_t *new_node;

	/* allocate memory space for that node */
	new_node = (binary_tree_t *)malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	/* assign values to the properties of the node */
	new_node->parent = parent;
	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;

	/* return a pointer to the node*/
	return (new_node);
}
