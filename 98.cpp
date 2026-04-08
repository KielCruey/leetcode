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

    std::vector<int> inorderTraversal(TreeNode* root) {
        // error checking
        if (root == nullptr)
            return v;

        inorderTraversal(root->left);
        v.push_back(root->val);
        inorderTraversal(root->right);

        return v;
    }

    // use inorder traversal deterimine if BTS if valid
    bool isValidBST(TreeNode* root) {
        v = inorderTraversal(root);

		// check if all number are stricly increasing
        for (int i = 0; i < v.size() - 1; i++) {
            if (v.at(i) >= v.at(i + 1))
				return false;
        }
        
        return true;
    }
};