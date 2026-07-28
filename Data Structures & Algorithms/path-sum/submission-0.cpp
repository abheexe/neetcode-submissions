class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        if (!root)
            return false;
        targetSum -= root->val;
        if(!root->left && !root->right){
            return targetSum == 0; 
        }

        bool left = hasPathSum(root->left, targetSum);
        bool right = hasPathSum(root->right, targetSum);


        
        return left || right;

    }
};