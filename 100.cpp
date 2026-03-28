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
    bool results = true;

    bool isSameTree(TreeNode* p, TreeNode* q) {
        // trivial case
        if (p == nullptr && q == nullptr) {
            results = true;
            return true;
        }

        if (p == nullptr || q == nullptr) {
            results = false;
            return false;
        }
            
        // if one isn't nullptr
        if (p->left != nullptr || q->left != nullptr) {
            results = isSameTree(p->left, q->left);

            if (!results) return false;
        }
            
        if (p->right != nullptr || q->right != nullptr) {
            results = isSameTree(p->right, q->right);

            if (!results) return false;
        }
            
        if (p->val != q->val) {
            results = false;
            return false;
        }
        else {
            results = true;
            return true;
        }

        return results;
    }
};