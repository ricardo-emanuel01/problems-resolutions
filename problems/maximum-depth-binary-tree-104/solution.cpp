# include <queue>

// Iterative way to check a binary tree max depth
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

int maxDepth(TreeNode *root) {
    if (root == NULL) return 0;
    
    std::queue<TreeNode *> kill;
    int depth;

    kill.push(root);

    while (!kill.empty()) {
        depth++;
        int k = kill.size();

        while (k--) {
            TreeNode *current = kill.front();
            kill.pop();

            if (root->right != NULL) kill.push(root->right);
            if (root->left != NULL) kill.push(root->left);
        }
    }
    return depth;
}
