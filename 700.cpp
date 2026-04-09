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
    TreeNode* n{};

public:
    TreeNode* searchBST(TreeNode* root, int val) {
        // decrease stack if found
        if (root == nullptr)
            return n;
        
        // set n to the found node
        if(root->val == val) {
            n = root;
            return n;
		}
        
		searchBST(root->left, val);
        searchBST(root->right, val);
		
        return n;
    }
};