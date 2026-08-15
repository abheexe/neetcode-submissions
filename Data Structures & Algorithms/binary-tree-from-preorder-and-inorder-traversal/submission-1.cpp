class Solution {
public:
    TreeNode* buildTree(vector<int>& inorder, int inStart, int inEnd, vector<int>& preorder, int preStart, int preEnd, unordered_map<int, int>& map){
        if(inStart > inEnd || preStart > preEnd)
            return nullptr;
        TreeNode* root = new TreeNode(preorder[preStart]);
        int inRoot = map.at(root->val);
        int numsLeft = inRoot - inStart;

        root->left = buildTree(inorder, inStart, inRoot-1, preorder, preStart+1, preStart + numsLeft, map);
        root->right = buildTree(inorder, inRoot+1, inEnd, preorder, preStart + numsLeft + 1, preEnd, map);

        return root;
    }

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        unordered_map<int,int> map;
        for(int i = 0; i < inorder.size(); i++){
            map[inorder[i]] = i;
        }
        return buildTree(inorder, 0, inorder.size()-1, preorder, 0, preorder.size()-1, map);
    }
};
