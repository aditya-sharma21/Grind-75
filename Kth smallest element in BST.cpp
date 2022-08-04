class Solution {
    int ans = 0 , cnt = 1;
public:
    int kthSmallest(TreeNode* root, int k) {
        if(root==nullptr) return 0;
        kthSmallest(root->left,k);
        if(cnt==k){
            ans = root->val;
        }
        cnt++;
        kthSmallest(root->right,k);
        return ans;
    }
};
