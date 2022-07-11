class Solution {
public:
    void helper(Node* root, vector<int> &ans){
        ans.push_back(root->val);
        for(int i=0; i<root->children.size(); i++){
            helper(root->children[i], ans);
        }
    }
    
    
    vector<int> preorder(Node* root) {
        vector<int>ans;
        if(root==NULL) return ans;
        helper(root, ans);
        return ans;
    }
};
