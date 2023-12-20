#include <stdio.h>
#include <stdlib.h>

struct TreeNode {
    int data;
    struct TreeNode* left;
    struct TreeNode* right;
};

struct TreeNode* root = NULL;

// Inserting a new node in a binary tree
struct TreeNode* insert(struct TreeNode* root, int data) {
    if (root == NULL) {
        struct TreeNode* newnode = malloc(sizeof(struct TreeNode));
        newnode->data = data;
        newnode->left = NULL;
        newnode->right = NULL;
        return newnode;
    }

    if (data < root->data) {
        root->left = insert(root->left, data);
    } else if (data > root->data) {
        root->right = insert(root->right, data);
    }

    return root;
}

// Searching for a node in the binary search tree
struct TreeNode* search(struct TreeNode* root, int data) {
    if (root == NULL || root->data == data) {
        return root;
    }

    if (data < root->data) {
        return search(root->left, data);
    } else {
        return search(root->right, data);
    }
}

// Delete a node from the binary tree
struct TreeNode* delete(struct TreeNode* root, int data) {
    if (root == NULL) {
        return root;
    }

    if (data < root->data) {
        root->left = delete(root->left, data);
    } else if (data > root->data) {
        root->right = delete(root->right, data);
    } else {
        if (root->left == NULL) {
            struct TreeNode* temp = root->right;
            free(root);
            return temp;
        } else if (root->right == NULL) {
            struct TreeNode* temp = root->left;
            free(root);
            return temp;
        }

        struct TreeNode* temp = root->right;
        while (temp->left != NULL) {
            temp = temp->left;
        }

        root->data = temp->data;
        root->right = delete(root->right, temp->data);
    }

    return root;
}

int main() {
    // Insert some nodes into the binary search tree.
    root = insert(root, 10);
    root = insert(root, 5);
    root = insert(root, 15);
    root = insert(root, 3);
    root = insert(root, 7);
    root = insert(root, 17);

    // Search for a node in the binary search tree.
    struct TreeNode* node = search(root, 15);
    if (node != NULL) {
        printf("Node found: %d\n", node->data);
    } else {
        printf("Node not found.\n");
    }

    // Delete a node from the binary search tree.
    root = delete(root, 15);

    // Search for the node again.
    node = search(root, 15);
    if (node != NULL) {
        printf("Node found: %d\n", node->data);
    } else {
        printf("Node not found.\n");
    }

    return 0;
}
