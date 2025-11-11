
class Solution {
public:

    int helper(TreeNode* root, int k, int& preOrder)
    {
        if(root == NULL) return -1;

        if(root->left)
        {
            int leftAns = helper(root->left, k, preOrder);

            if(leftAns != -1) return leftAns;
        }

        if(preOrder + 1 == k) return root->val;
        
        preOrder = preOrder + 1;

        if(root->right)
        {
            int rightAns = helper(root->right, k, preOrder);

            if(rightAns != -1) return rightAns;
        }

        return -1;
    }

    int kthSmallest(TreeNode* root, int k) {
        int preOrder = 0;

        return helper(root, k , preOrder);
    }
};