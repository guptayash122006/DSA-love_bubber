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
private: 
    void solve(TreeNode* root , int level , vector<int>& result) {
        if(root == NULL) {
            return ;
        }
        if(level == result.size()) {
            result.push_back(root -> val) ;
        }

        solve(root->right , level+1 , result) ;
        solve(root-> left , level+1 , result) ;
    }
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int> result ;
        int level = 0 ;
        solve(root , level , result) ;
        return result ;
    }
};