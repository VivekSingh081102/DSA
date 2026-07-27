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

    // queue<TreeNode*> q;
    vector<int> a;

    // void bfs(TreeNode* root){
    //     q.push(root);
        
    //     while(!q.empty()){
    //         Treenode* cur = q.front();
    //         q.pop();
    //         a.emplace_back(cur->val);
    //         if(cur->left != nullptr)q.push(cur->left);
    //         if(cur->right != nullptr) q.push(cur->right);
    //     }
    // }

    void Inorder(TreeNode* root){
        if(root){
            Inorder(root->left);
            a.emplace_back(root->val);
            Inorder(root->right);
        }
    }

    bool isValidBST(TreeNode* root) {
        Inorder(root);

        for(int i=0; i<a.size()-1; i++){
            if(a[i]>=a[i+1]) return false;
        }
        return true;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna