[剑指 Offer 33. 二叉搜索树的后序遍历序列](https://leetcode.cn/problems/er-cha-sou-suo-shu-de-hou-xu-bian-li-xu-lie-lcof/)
- 解法一：递归分治
```C++
class Solution {
public:
    bool deal(vector<int>& a, int l, int r) {
        if (l >= r) return true;
        int root = a[r];
        int idx = r;
        for (int i = l; i < r; i++) {
            if (a[i] > root) {
                idx = i;
                for (int j = i + 1; j < r; j++) {
                    if (a[j] < root) return false;
                }
                break;
            }
        }
        return deal(a, l, idx - 1) && deal(a, idx, r - 1);
    }
    bool verifyPostorder(vector<int>& postorder) {
        return deal(postorder, 0, (int)postorder.size() - 1);
    }
};
```