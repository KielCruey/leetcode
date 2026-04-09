#include <vector>
#include <stack>

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
 
// preorder traversal solution idea
class Solution {
public:
    std::vector<int> v;
	std::stack<int> s;
    std::stack<int> tempS;
    int leafSum{};
	bool results{};

    bool hasPathSum(TreeNode* root, int targetSum) {
		sumPath(root, targetSum);

        return results;
    }

    void sumPath(TreeNode* root, int targetSum) {
        // stop searching for sum path
        if (root == nullptr || results)
            return;

        s.push(root->val);

        if (root->right == nullptr && root->left == nullptr) {
            tempS = s;

            int size = tempS.size();
            for (int i = 0; i < size; i++) {
                leafSum += tempS.top(); 
                tempS.pop();
            }

            if (targetSum == leafSum) 
                results = true;
            else 
                leafSum = 0;
        }

        sumPath(root->left, targetSum);
        sumPath(root->right, targetSum);

        // no path continuation -- need to backtrack
        if(!s.empty())
            s.pop();
    }
};