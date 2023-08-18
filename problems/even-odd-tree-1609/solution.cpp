# include <queue>

// Using a BFS to track the current level of the tree
// we can validate the stratagy based on the current
// level number
bool isEvenOddTree(TreeNode *root) {
    std::queue<TreeNode *> kill;
    kill.push(root);
    int depth = 0;
    int quantPerLevel;
    TreeNode *previous;

    while(!kill.empty()) {
        quantPerLevel = kill.size();
        previous = NULL;

        while (k--) {
            TreeNode *current = kill.front();
            kill.pop();

            if (depth % 2 == 0) {
                if (current->val % 2 == 0) return false;
                if (previous != NULL) {
                    if (current->val <= previous->val) return false;
                }
            } else {
                if (current->val % 2 == 1) return false;
                if (previous != NULL) {
                    if (current->val >= previous->val) return false;
                }
            }
            previous = current;
        }
        depth++;
    }
    return true;
}