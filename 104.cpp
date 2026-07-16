#include <stack>
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
    int maxLevel{};
    std::stack<int> s;
    
    int maxDepth(TreeNode* root) {
        // use dfs -- using a stack
        std::stack<TreeNode*> s;
        int maxLevel{};

        // trivial case
        if (root == nullptr) return 0;

        s.push(root);

        checkDepth(root, s, maxLevel);

        return maxLevel;
    }

    void checkDepth(TreeNode* root, std::stack<TreeNode*>& s, int& maxLevel) {
        while (!s.empty()) {
            TreeNode* currentNode = root;

            int sTemp = s.size();
            maxLevel = std::max(maxLevel, sTemp);

            if (root->left != nullptr) {
                s.push(root->left);
                checkDepth(root->left, s, maxLevel);
            } 

            if (root->right != nullptr) {
                s.push(root->right); 
                checkDepth(root->right, s, maxLevel);
            }

            if (!s.empty()) 
                s.pop();
        }
    }
};

int main() {
    Solution s;

    // test 1
    /*
    TreeNode* seven = new TreeNode(7);
    TreeNode* fifteen = new TreeNode(15);
    TreeNode* twenty = new TreeNode(20, fifteen, seven);
    TreeNode* nine = new TreeNode(9);
    TreeNode* root = new TreeNode(3, nine, twenty);
    */

    // test 2
    /*
    TreeNode* two = new TreeNode(2);
    TreeNode* root = new TreeNode(1, nullptr, two);
    */

    // test 3
    TreeNode* six = new TreeNode(6);
    TreeNode* five = new TreeNode(5, nullptr, six);
    TreeNode* four = new TreeNode(4, nullptr, five);
    TreeNode* three = new TreeNode(3);
    TreeNode* two = new TreeNode(2, three, nullptr);
    TreeNode* root = new TreeNode(1, two, four);
    
   
    int results = s.maxDepth(root);

    return 0;
}