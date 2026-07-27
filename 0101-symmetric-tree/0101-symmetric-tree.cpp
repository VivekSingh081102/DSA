class Solution {
public:
    bool isMirror(TreeNode* p, TreeNode* q) {
        if (p == nullptr && q == nullptr) return true;
        if (p == nullptr || q == nullptr) return false;

        return p->val == q->val &&
               isMirror(p->left, q->right) &&
               isMirror(p->right, q->left);
    }

    bool isSymmetric(TreeNode* root) {
        return isMirror(root->left, root->right);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna