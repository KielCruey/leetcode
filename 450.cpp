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


        return root;
    }

    TreeNode* treeSearch(TreeNode* root, int key) {
        if (root == nullptr || key == root->val) return root;
        else if (key < root->val) return treeSearch(root->left, key);
        else treeSearch(root->right, key);
    }

    TreeNode* findMinimum(TreeNode* root) {
        while (root->left != nullptr)
            root = root->left;

        return root;
    }
    
    TreeNode* treeSuccessor(TreeNode* root) {
        
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

    TreeNode* t = s.deleteNode(root, 3);

    /*
    TreeNode* four = new TreeNode(4);
    TreeNode* two = new TreeNode(2, nullptr, four);
    TreeNode* seven = new TreeNode(7);
    TreeNode* six = new TreeNode(6, nullptr, seven);
    TreeNode* root = new TreeNode(5, two, six);

    TreeNode* t = s.deleteNode(root, 0);
    */
    
    return 0;
}