#include <vector>

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
    std::vector<int> v;

    std::vector<int> preorderTraversal(TreeNode* root) {
        if(root == nullptr)
            return v;

        v.push_back(root->val);
        preorderTraversal(root->left);
        preorderTraversal(root->right);

        return v;
    }
};