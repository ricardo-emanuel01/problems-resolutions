#include <bits/stdc++.h>
using namespace std;
 
struct Node {
    int key;
    Node* left, *right;
};

int sumBT(Node* root)
{
    stack<Node *> s;
    s.push(root);
    Node *current;
    int res = 0;
    
    while (!s.empty()) {
        current = s.top();
        s.pop();
        res += current->key;
        
        if (current->left) s.push(current->left);
        if(current->right) s.push(current->right);
    }
    
    return res;
}


int sumBTRecursive(Node *root) {
    if (!root) {
        return 0;    
    }
    int a = sumBT(root->left);
    int b = sumBT(root->right);
    
    return a + b + root->key;
}
