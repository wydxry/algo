[剑指 Offer 26. 树的子结构](https://leetcode.cn/problems/shu-de-zi-jie-gou-lcof/)
```C++
class Solution {
public:
    bool chk(TreeNode *A, TreeNode* B) {
        if (B) {
            if (!A) return false;
            if (A->val != B->val) return false;
            return chk(A->left, B->left) && chk(A->right, B->right); 
        }
        return true;
    }
    bool isSubStructure(TreeNode* A, TreeNode* B) {
        if (!A||!B) return false;
        if (chk(A, B)) return true;
        return (A->left ? isSubStructure(A->left, B) : false) || (A->right ? isSubStructure(A->right, B) : false);
    }
};
```