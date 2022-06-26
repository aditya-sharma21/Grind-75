class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> output;
        queue<TreeNode*>q;
        q.push(root);
        if(root==NULL)return output;
        while(!q.empty())
        {
            vector<int>helper;
            int n=q.size();
            for(int i=0;i<n;i++)
            {
                TreeNode* node = q.front();
                q.pop();
                helper.push_back(node->val);
                if(node->left)q.push(node->left);
                if(node->right)q.push(node->right);
            }
            output.push_back(helper);
        }
        
        return output;
    }
}