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
// class Solution {
//     int ans=0;
// public:
//     int sumRootToLeaf(TreeNode* root) {
//         int buff = 0;
//         dfs(root, buff);
//         return ans;    
//     }
    
//     void dfs(TreeNode *root, int buff){
//         buff = buff<<1 + root->val;
//         if(!root->left && !root->right){
//             ans += buff;
//             return;
//         }
//         if(root->left) dfs(root->left, buff);
//         if(root->right) dfs(root->right, buff);
//     }
// };
class Solution {
public:
    int sumRootToLeafHelper(TreeNode* rt, int cur_val) {
        if(! rt) return 0;
        
        cur_val = (cur_val << 1) | rt->val;
        
        if(!rt->left && !rt->right)
			return cur_val;
			
        return sumRootToLeafHelper(rt->left, cur_val) + sumRootToLeafHelper(rt->right, cur_val);
    }
    
    int sumRootToLeaf(TreeNode* rt) {
        return sumRootToLeafHelper(rt, 0);
    }
};