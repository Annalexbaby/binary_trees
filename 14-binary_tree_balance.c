#include "binary_trees.h"

/**
 * binary_tree_height - gets the height of a binary tree
 * @tree: root node to draw height from for tree
 * Return: size_t representing height, 0 on failure or NULL.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	right_height = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	return (left_height > right_height ? left_height : right_height);
}

/**
 * binary_tree_balance - A function that measures the balance factor of a
 * binary tree.
 * @tree: Pointer to root node to calculate balance factor.
 * Return: The balance factor of the tree.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height_node = 0, right_height_node = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL)
		left_height_node = 0;
	else
		left_height_node = 1 + ((int) binary_tree_height(tree->left));
	if (tree->right == NULL)
		right_height_node = 0;
	else
		right_height_node = 1 + ((int) binary_tree_height(tree->right));
	return (left_height_node - right_height_node);
}
