/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> res;

        if (!root){
            return res;
        }

        stack<TreeNode*> st;
        TreeNode* lastVisited = nullptr;
        TreeNode* node = root;

        while (!st.empty() || node != nullptr) {
            if (node != nullptr) {
                st.push(node);
                node = node->left;
            } else {
                TreeNode* topNode = st.top();
                if (topNode->right != nullptr &&
                    lastVisited != topNode->right) {
                    node = topNode->right;
                } else {
                    res.push_back(topNode->val);
                    lastVisited = topNode;
                    st.pop();
                }
            }
        }

        return res;
    }
};