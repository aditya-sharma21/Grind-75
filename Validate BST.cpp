class Solution {
public:
    vector<int> res;
    void helper(TreeNode* root){
        if(!root) return;
        helper(root->left);
        res.push_back(root->val);
        helper(root->right);
    }
    
    
    bool isValidBST(TreeNode* root) {
        helper(root);
        for(int i=1;i<res.size();i++){
            if(res[i]<=res[i-1]){
                return false;
            }
        }
        
        return true;
    }
};
