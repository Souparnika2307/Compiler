#ifndef TREE_H
#define TREE_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Define TreeNode structure
typedef struct TreeNode {
    char *label;
    int numChildren;
    struct TreeNode **children;
} TreeNode;

// Function to create a new TreeNode
TreeNode *createTreeNode(char *label, int numChildren);

// Function to add a child to a TreeNode
void addChild(TreeNode *parent, TreeNode *child);

// Function to print the parse tree
void printParseTree(TreeNode *root, int depth);

#endif /* TREE_H */

