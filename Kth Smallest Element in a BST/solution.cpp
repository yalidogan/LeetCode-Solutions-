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
    int kthSmallest(TreeNode* root, int k) {
        std::vector <int> v; 
        //Inorder traverse the BST into the vector 

        inOrderTrav(root, v); 
        int result = v[k-1];
        return result;
    }

    void inOrderTrav(TreeNode* root, vector<int>& vec){

        if(root == nullptr){
            return; 
        }

        inOrderTrav(root->left, vec); 
        vec.push_back(root->val);
        inOrderTrav(root->right, vec);
    }
};
