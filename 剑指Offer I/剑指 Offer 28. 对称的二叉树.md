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
    // https://leetcode.cn/problems/dui-cheng-de-er-cha-shu-lcof/

    // 同 LC 101. 对称二叉树 
    // https://leetcode.cn/problems/symmetric-tree/
    
    bool chk(TreeNode* a, TreeNode* b) {
        if (!a && !b) return true;
        if (!a || !b) return false;
        if (a->val != b->val) return false;
        return chk(a->left, b->right) && chk(a->right, b->left);
    }
    bool isSymmetric(TreeNode* root) {
        if (!root) return true;
        return chk(root->left, root->right);
    }
};
```