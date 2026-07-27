class Solution {
private:
    int dfs(TreeNode* root, int& maxlen){
        if(!root){ return 0; }
        int left = dfs(root->left, maxlen);
        int right = dfs(root->right, maxlen);
        maxlen = max(maxlen, left+right);
        return 1+max(left,right);
    }
public:
    int diameterOfBinaryTree(TreeNode* root) {
        int maxlen = 0;
        if(!root){ return 0; }
        dfs(root, maxlen);
        return maxlen;
    }
};
