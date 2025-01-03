/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int maxPathSum(TreeNode* root) {
        if(root->left == nullptr && root->right == nullptr){
            return root->val; 
        }



        int res = INT_MIN; 
        height(root, res);
        return res; 
    }

    int height(TreeNode* root, int &maximum){
        if(root == nullptr){
            return 0; 
        }

        int lh = max(0, height(root->left, maximum));
        int rh = max(0, height(root->right, maximum));

        maximum = max(maximum, lh + rh + root->val);
        return root->val + max(lh, rh);
    }
};
