class Solution {
    int count = 0;
private:
    void dfs(TreeNode* node, int currmax){
        if(!node){ return; }
        if(node->val >=currmax){
            count++;
        }
        currmax = max(currmax, node->val);
        dfs(node->left, currmax);
        dfs(node->right, currmax);
    }
    
public:
    int goodNodes(TreeNode* root) {
        dfs(root, root->val);
        return count;
    }
};
