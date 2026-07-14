struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
right(right) {}
};

class Solution {
public:
    TreeNode* deleteNode(TreeNode* root, int key) {
        TreeNode* tree = root;
        return root;
    }
};

int main() {
    Solution s;

    TreeNode* two = new TreeNode(2);
    TreeNode* four = new TreeNode(4);
    TreeNode* seven = new TreeNode(7);
    TreeNode* three = new TreeNode(3, two, four);
    TreeNode* six = new TreeNode(6, nullptr, seven);
    TreeNode* root = new TreeNode(5, three, six);

    s.deleteNode(root, 3);

    /*
    TreeNode* four = new TreeNode(4);
    TreeNode* two = new TreeNode(2, nullptr, four);
    TreeNode* seven = new TreeNode(7);
    TreeNode* six = new TreeNode(6, nullptr, seven);
    TreeNode* root = new TreeNode(5, two, six);

    s.deleteNode(root, 0);
    */
    
    return 0;
}