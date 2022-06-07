```C++
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
    // https://leetcode.cn/problems/ping-heng-er-cha-shu-lcof/submissions/

    // 同 LC 110. 平衡二叉树
    // https://leetcode.cn/problems/balanced-binary-tree/

    // 自顶向下的递归 时间复杂度O(n^2) 空间复杂度O(n)
    int height(TreeNode* root) {
        if (!root) return 0;
        return max(height(root->left), height(root->right)) + 1;
    }   
    bool isBalanced(TreeNode* root) {
        if (!root) return true;
        int left = height(root->left);
        int right = height(root->right);
        if (abs(left - right) > 1) return false;
        return isBalanced(root->left) && isBalanced(root->right);
    }

    // 自底向上的递归 时间复杂度O(n) 空间复杂度O(n)
    int chk(TreeNode* root) {
        if (!root) return 0;
        int left = chk(root->left);
        int right = chk(root->right);
        if (left == -1 || right == -1 || abs(left - right) > 1) return -1;
        return max(left, right) + 1;
    }
    bool isBalanced(TreeNode* root) {
        return chk(root) >= 0;
    }
};
```