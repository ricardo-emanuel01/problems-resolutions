#include<bits/stdc++.h>
using namespace std;

class node{
    public:
     int data;
     node*left;
     node*right;
     node(int d){
       data=d;
       left=NULL;
       right=NULL;
     }
 };
 
 
 pair<node *, node *> findNode(node *root, int k) {
     pair<node *, node *> nodes;
     nodes.first = root;
     nodes.second = NULL;
     
     while (nodes.first != NULL) {
         if (k < nodes.first->data) {
             nodes.second = nodes.first;
             nodes.first = nodes.first->left;
         } else if (k > nodes.first->data) {
             nodes.second = nodes.first;
             nodes.first = nodes.first->right;
         } else {
             break;
         }
     }
     return nodes;
    }
 
 
node* deleteNode(node* root, int k) {
    pair<node*, node*> nodes = findNode(root, k);

    if (!nodes.first) {
        // Node with value k not found, return the root as is
        return root;
    }

    node* target = nodes.first;
    node* parent = nodes.second;

    // Case 1: Node to be deleted is a leaf node
    if (!target->left && !target->right) {
        if (parent) {
            if (parent->left == target) {
                parent->left = NULL;
            } else {
                parent->right = NULL;
            }
        } else {
            root = NULL;
        }
        delete target;
    }
    // Case 2: Node to be deleted has one child
    else if (!target->left || !target->right) {
        node* child = (target->left) ? target->left : target->right;
        if (parent) {
            if (parent->left == target) {
                parent->left = child;
            } else {
                parent->right = child;
            }
        } else {
            root = child;
        }
        delete target;
    }
    // Case 3: Node to be deleted has two children
    else {
        node* successor = target->right;
        while (successor->left) {
            successor = successor->left;
        }
        int successorValue = successor->data;
        root = deleteNode(root, successorValue);  // Delete successor recursively
        target->data = successorValue;
    }

    return root;
}
