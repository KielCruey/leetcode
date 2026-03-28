#include <cstddef>

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
    int countNodes(TreeNode* root) {
        // increments if a valid node exists, doesn't matter about value
        if (root == nullptr)
            return 0;
        else
            numOfNodes++;

        // recursively check left and right nodes
        countNodes(root->left);
        countNodes(root->right);

        return numOfNodes;
    }

    int numOfNodes = 0;
};