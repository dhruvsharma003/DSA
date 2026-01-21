class Solution {
public:
    int search(vector<int>& inorder, int left, int right, int val) {
        for (int i = left; i <= right; i++) {
            if (inorder[i] == val)
                return i;
        }
        return -1;
    }

    TreeNode* helper(vector<int>& preorder, vector<int>& inorder,int &preidx, int left, int right) {

        if (left > right)
            return NULL;

        // create root from preorder
        TreeNode* root = new TreeNode(preorder[preidx]);

        // find root in inorder
        int idx = search(inorder, left, right, preorder[preidx]);
        preidx++;

        // build left and right subtree
        root->left = helper(preorder, inorder, preidx, left, idx - 1);
        root->right = helper(preorder, inorder, preidx, idx + 1, right);

        return root;
    }

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int preidx = 0;
        return helper(preorder, inorder, preidx, 0, inorder.size() - 1);
    }
};
