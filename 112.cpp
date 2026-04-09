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

int main() {
    Solution s;
    /*
    TreeNode* root = new TreeNode(5);
    root->left = new TreeNode(4);
    root->right = new TreeNode(8);
    root->left->left = new TreeNode(11);
    root->left->left->left = new TreeNode(7);
    root->left->left->right = new TreeNode(2);
    root->right->left = new TreeNode(13);
    root->right->right = new TreeNode(4);
    root->right->right->right = new TreeNode(1);
    int targetSum = 22;
    */

    /*
	TreeNode* root = new TreeNode(1);
	root->left = new TreeNode(2);
	root->right = new TreeNode(3);  
    int targetSum = 5;
    */

    /*
    TreeNode* root = new TreeNode(1);
	root->left = new TreeNode(2);
	int targetSum = 0;
    */

    TreeNode* root = new TreeNode(7);
    root->left = new TreeNode(0);
	root->left->left = new TreeNode(-1);
	root->left->left->right = new TreeNode(1);
    root->left->left->right->left = new TreeNode(-7);
	root->left->right = new TreeNode(-6);

    int targetSum = 0;

    bool result = s.hasPathSum(root, targetSum);
	return 0;
}