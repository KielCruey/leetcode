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

int main() {
    Solution s;

    //root = [3, 1, 4, 3, null, 1, 5]
    TreeNode* five_r = new TreeNode(5);
    TreeNode* one_r = new TreeNode(1);
    TreeNode* four_r = new TreeNode(4, one_r, five_r);

    TreeNode* three_l = new TreeNode(3);
    TreeNode* one_l = new TreeNode(1, three_l, nullptr);

    TreeNode* root = new TreeNode(3, one_l, four_r);

    s.goodNodes(root);

    return 0;
}