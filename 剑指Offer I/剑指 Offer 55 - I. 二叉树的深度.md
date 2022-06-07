```C++
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
    // https://leetcode.cn/problems/er-cha-shu-de-shen-du-lcof/

    // 同 LC 104. 二叉树的最大深度
    // https://leetcode.cn/problems/maximum-depth-of-binary-tree/

    // 递归
    int maxDepth(TreeNode* root) {
        if (!root) return 0;
        int left = maxDepth(root->left);
        int right = maxDepth(root->right);
        return max(left, right) + 1;
    }
    // 迭代：二叉树层序遍历
    int maxDepth(TreeNode* root) {
        int ans = 0;
        if (!root) return ans;
        queue<TreeNode*> que;
        que.push(root);
        while (!que.empty()) {
            ++ans;
            for (int i = que.size() - 1; i >= 0; i--) {
                auto f = que.front();
                que.pop();
                if (f->left) que.push(f->left);
                if (f->right) que.push(f->right);
            }
        }
        return ans;
    }
};
```
```