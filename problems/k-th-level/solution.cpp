#include <bits/stdc++.h>
using namespace std;
 
struct Node {
    int key;
    Node* left, *right;
};

vector<int> printKthLevel(Node* root, int n){
    // your code goes here
   queue<Node *> kill;
   Node *current;
   vector<int> res;
   int counter = 0;
   kill.push(root);
   
   while (!kill.empty()) {
       int k = kill.size();
       while (k--) {
           current = kill.front();
           kill.pop();
           if (counter == n) res.push_back(current->key);
           
           if (current->left) kill.push(current->left);
           if (current->right) kill.push(current->right);
       }
       counter++;
   }
   return res;
}
