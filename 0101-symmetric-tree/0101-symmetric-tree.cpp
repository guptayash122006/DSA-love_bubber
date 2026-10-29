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
    bool Sym(TreeNode* p , TreeNode* q) {
        if(p == NULL && q == NULL) {
            return true ;
        }

        if(p == NULL || q == NULL || p -> val != q -> val) {
            return false ;
        }

        return Sym(p -> left , q-> right) &&
                Sym(p -> right , q -> left) ;
    }
public:
    bool isSymmetric(TreeNode* root) {
        if(root == NULL) {
            return true ;
        }
        return Sym(root-> left , root -> right) ;
    }
};