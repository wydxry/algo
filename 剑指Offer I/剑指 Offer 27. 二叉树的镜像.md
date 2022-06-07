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
    // https://leetcode.cn/problems/er-cha-shu-de-jing-xiang-lcof/

    // 同 LC 226. 翻转二叉树 
    // https://leetcode.cn/problems/invert-binary-tree/

    TreeNode* mirrorTree(TreeNode* root) {
        if (!root) return root;
        auto left = root->left;
        auto right = root->right;
        root->left = mirrorTree(right);
        root->right = mirrorTree(left);
        return root;
    }
};
```