#include "binary_trees.h"

/**
 * binary_tree_insert_right -  inserts a node as the left-child of another node
 *
 * @parent: is a pointer to the node to insert the left-child in
 * @value:  is the value to store in the new node
 *
 * Description - If parent already has a right-child, the new node must
 *               take its place, and the old left-child must be set as
 *               the left-child of the new node.
 *
 * Return: a pointer to the created node, or NULL on failure or if
 *               parent is NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_right_node;

	if (!parent)
		return (NULL);

	new_right_node = malloc(sizeof(binary_tree_t));

	if (new_right_node == NULL)
		return (NULL);

	new_right_node->n = value;
	new_right_node->parent = parent;
	new_right_node->right = parent->right;
	new_right_node->left = NULL;
	parent->right = new_right_node;
	if (new_right_node->right)
		(new_right_node->right)->parent = new_right_node;

	return (new_right_node);
}
