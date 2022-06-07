```C++
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    // https://leetcode.cn/problems/er-cha-sou-suo-shu-de-di-kda-jie-dian-lcof/

    int ans, k;
    void deal(TreeNode* root) {
        if (!root) return;
        deal(root->right);
        k--;
        if (k == 0) ans = root->val;
        deal(root->left);
    }
    int kthLargest(TreeNode* root, int k) {
        this->k = k;
        deal(root);
        return ans;
    }
};
```