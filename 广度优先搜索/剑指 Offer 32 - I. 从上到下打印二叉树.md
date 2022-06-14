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
    // https://leetcode.cn/problems/cong-shang-dao-xia-da-yin-er-cha-shu-lcof/
    
    // BFS
    vector<int> levelOrder(TreeNode* root) {
        vector<int> ans;
        if (!root) return ans;
        queue<TreeNode*> que;
        que.push(root);
        vector<int> t;
        while (!que.empty()) {
            for (int i = que.size() - 1; i >= 0; i--) {
                auto f = que.front();
                ans.push_back(f->val);
                que.pop();
                if (f->left) que.push(f->left);
                if (f->right) que.push(f->right);
            }
        }
        return ans;
    }
};
```