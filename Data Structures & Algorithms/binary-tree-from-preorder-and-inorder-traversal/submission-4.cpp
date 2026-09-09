class Solution {
public:
    TreeNode* buildTree(vector<int>& preorder, int preStart, int preEnd, vector<int>& inorder, int inStart, int inEnd, unordered_map<int,int>& map){
        if(inEnd < inStart || preEnd < preStart)
            return nullptr;
        TreeNode* root = new TreeNode(preorder[preStart]);
        int inRoot = map.at(root->val);
        int numsLeft = inRoot - inStart;

        root->left = buildTree(preorder, preStart + 1, preStart+numsLeft, inorder, inStart, inRoot - 1, map);
        root->right = buildTree(preorder, preStart+numsLeft+1, preEnd, inorder, inRoot+1, inEnd, map);

        return root; 
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        unordered_map<int,int> map;
        for(int i = 0; i < inorder.size(); i++){
            map[inorder[i]] = i;
        }
        return buildTree(preorder, 0, preorder.size()-1, inorder, 0, inorder.size()-1, map);
    }
};
