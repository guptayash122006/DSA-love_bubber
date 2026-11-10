
class Solution {
public:
    void KthLevel(TreeNode* root, int k, int &sum) {
        if (root == NULL) {
            return;
        }

        if (k == 1) {
            sum += root->val;
            return;
        }

        KthLevel(root->left, k - 1, sum);
        KthLevel(root->right, k - 1, sum);
    }

    int height(TreeNode* root) {
        if (root == NULL) {
            return 0;
        }

        return 1 + max(height(root->left), height(root->right));
    }

    int maxLevelSum(TreeNode* root) {
        int h = height(root);

        int maxSum = INT_MIN;
        int ans = 1;

        for (int i = 1; i <= h; i++) {
            int sum = 0;

            KthLevel(root, i, sum);

            if (sum > maxSum) {
                maxSum = sum;
                ans = i;
            }
        }

        return ans;
    }
};
