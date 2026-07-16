#include <vector>
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    // collection of left values -- left to right
    std::vector<int> r1;
    std::vector<int> r2;

    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        leafTraversal(root1, r1);
        leafTraversal(root2, r2);

        if (r1.size() != r2.size())
            return false;
        else 
            for (int i = 0; i < r1.size(); i++) 
                if (r1.at(i) != r2.at(i)) return false;
           
        return true;
    }

    void leafTraversal(TreeNode* r, std::vector<int>& v) {
        // push back leaf value
        if (r->right == nullptr && r->left == nullptr) v.push_back(r->val);

        if (r->left != nullptr) leafTraversal(r->left, v);
        if (r->right != nullptr) leafTraversal(r->right, v);
    }
};