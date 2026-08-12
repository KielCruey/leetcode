#include <algorithm>

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    int goodNodes(TreeNode* root) {
        int count{};
        int value = root->val;

        traverseTree(root, value, count);

        return count;
    }

    void traverseTree(TreeNode* root, int value, int& count) {
        if (root == nullptr)
            return;

        int tempValue = std::max(value, root->val);

        traverseTree(root->left, tempValue, count);
        traverseTree(root->right, tempValue, count);

        if (root->val >= value)
            count++;
    }
};