#include "binary_trees.h"

/**
* binary_tree_insert_left - this function inserts a new node s the left child
* of another node in a binary tree.
* @parent: tis represents the parent or root node.
* @value: this reperesnts the value to  be set in the node.
* Return: on success, pointer to the new node is returned else NULL/
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);
	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = value;
	new_node->right = NULL;
	new_node->parent = parent;
	if (parent->left != NULL)
	{
		new_node->left = parent->left;
		new_node->left->parent = new_node;
	}
	parent->left = new_node;
	return (new_node);
}
