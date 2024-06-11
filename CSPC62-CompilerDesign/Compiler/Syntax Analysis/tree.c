#include "tree.h"

// Function to create a new TreeNode
TreeNode *createTreeNode(char *label, int numChildren) {
    TreeNode *node = (TreeNode *)malloc(sizeof(TreeNode));
    node->label = label;
    node->numChildren = numChildren;
    if (numChildren > 0) {
        node->children = (TreeNode **)malloc(numChildren * sizeof(TreeNode *));
        for (int i = 0; i < numChildren; i++) {
            node->children[i] = NULL;
        }
    } else {
        node->children = NULL;
    }
    return node;
}

// Function to add a child to a TreeNode
void addChild(TreeNode *parent, TreeNode *child) {
    if (parent->numChildren == 0) {
        parent->children = (TreeNode **)malloc(sizeof(TreeNode *));
    } else {
        parent->children = (TreeNode **)realloc(parent->children, (parent->numChildren + 1) * sizeof(TreeNode *));
    }
    parent->children[parent->numChildren++] = child;
}

// Function to print the parse tree
void printParseTree(TreeNode *root, int depth) {
    if (root == NULL) {
        return;
    }
    for (int i = 0; i < depth; i++) {
        printf("  "); // Print indentation
    }
    printf("%s\n", root->label); // Print node label
    for (int i = 0; i < root->numChildren; i++) {
        printParseTree(root->children[i], depth + 1); // Recursively print children
    }
}

