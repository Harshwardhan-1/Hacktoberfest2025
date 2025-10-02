class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<TreeNode*>q;
        vector<vector<int>>ans;
        if(!root) return ans;
        vector<int>result;
        q.push(root);
        q.push(NULL);
        while(q.size()>0){
            TreeNode*curr=q.front();
            q.pop();
            if(curr==NULL){
                ans.push_back(result);
                result.clear();
                if(!q.empty()) q.push(NULL);
            }else{
                result.push_back(curr->val);
                if(curr->left)q.push(curr->left);
                if(curr->right)q.push(curr->right);
            }
        }
        return ans;
    }
};
