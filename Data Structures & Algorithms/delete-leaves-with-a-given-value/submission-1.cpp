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
    TreeNode* removeLeafNodes(TreeNode* root, int target) {
        // does not explicitly delete anything, it just makes root->left or root-> right null
        if(!root)
            return nullptr;
        
        root->left = removeLeafNodes(root->left, target);
        root->right = removeLeafNodes(root->right, target);

        if(!root->left && !root->right && root->val == target){
            return nullptr;
        }
        return root;
    }
};