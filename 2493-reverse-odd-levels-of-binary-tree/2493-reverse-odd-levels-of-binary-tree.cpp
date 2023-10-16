/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* reverseOddLevels(TreeNode* root) {
        //  vector<vector<TreeNode*>> ans;
         int flag =0;
        queue<TreeNode*> q;
    
        q.push(root);
        while(!q.empty())
        {
            int n  = q.size();
            vector<TreeNode*> level;
            for(int i = 0; i<n ;i++)
            {
                TreeNode* node = q.front();
                q.pop();
                if(node->left!=NULL)
                {
                    q.push(node->left);
                }
                  if(node->right!=NULL)
                {
                    q.push(node->right);
                }
                level.push_back(node);;
            }
            if(flag)
            {
              int l =0, r = level.size()-1;
            while(l<r){
                int x = level[l] -> val;
                int y = level[r]-> val;
                level[l] -> val = y;
                level[r] -> val = x;
                l++; r--; 
            }
              flag =0;
            }
            else
            {
            flag=1;
            }
        }
        return root;
        
    }
};