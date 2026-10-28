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
    int height(TreeNode* root) {
        if (root == NULL) {
            return 0;
        }

        queue<TreeNode*> q;
        q.push(root);
        q.push(NULL);

        int h = 0;

        while (q.size() > 0) {
            TreeNode* curr = q.front();
            q.pop();

            if (curr == NULL) {
                h++;
                if (!q.empty()) {
                    q.push(NULL);
                    continue;
                }
                else {
                    break;
                }
            }

            if (curr->left != NULL) {
                q.push(curr->left);
            }

            if (curr->right != NULL) {
                q.push(curr->right);
            }
        }

        return h;
    }

    bool isBalanced(TreeNode* root) {
        if (root == NULL) {
            return true;
        }

        int left = height(root->left);
        int right = height(root->right);

        if (abs(left - right) > 1) {
            return false;
        }

        return isBalanced(root->left) &&
               isBalanced(root->right);
    }
};