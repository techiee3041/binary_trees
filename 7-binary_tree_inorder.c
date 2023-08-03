#include "binary_trees.h"

/**
 * binary_tree_preorder - Goes through a binary tree using in-order traversal.
 * @tree: A pointer to the root node of the tree to traverse.
 * @func: A pointer to a function to call for each node.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_preorder(tree->left, func);
		funct(tree->n);
		binary_tree_preorder(tree->right, func);
	}
}
