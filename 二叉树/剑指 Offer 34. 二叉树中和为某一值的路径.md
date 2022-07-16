[剑指 Offer 34. 二叉树中和为某一值的路径](https://leetcode.cn/problems/er-cha-shu-zhong-he-wei-mou-yi-zhi-de-lu-jing-lcof/)
```C++
class Solution {
public:
    vector<vector<int>> res;
    vector<int> t;
    void deal(TreeNode* root,  vector<int>& t, int target) {
        if (!root) return;
        t.push_back(root->val);
        target -= root->val;
        if (target == 0 && !root->left && !root->right) res.push_back(t);
        deal(root->left, t, target);
        deal(root->right, t, target);
        t.pop_back();
    }
    vector<vector<int>> pathSum(TreeNode* root, int target) {
        if (!root) return res;
        deal(root, t, target);
        return res;
    }
};
```