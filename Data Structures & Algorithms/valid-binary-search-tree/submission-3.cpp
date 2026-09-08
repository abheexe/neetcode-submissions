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
    bool helperValidBST(TreeNode* root, long long minVal, long long maxVal){
      if(!root)
        return true;
      
      if(root->val >= maxVal || root->val <= minVal){ return false; }
      return helperValidBST(root->left, minVal, root->val) && helperValidBST(root->right, root->val, maxVal);
    }
    bool isValidBST(TreeNode* root) {
        return helperValidBST(root, INT_MIN, INT_MAX);
    }
};
