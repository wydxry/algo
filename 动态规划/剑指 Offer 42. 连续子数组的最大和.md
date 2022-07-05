[剑指 Offer 42. 连续子数组的最大和](https://leetcode.cn/problems/lian-xu-zi-shu-zu-de-zui-da-he-lcof/)

- 解法一：动态规划 时间复杂度O(n)，空间复杂度O(1).
```C++
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int res = nums[0], s = 0;
        for (int i = 0; i < nums.size(); i++) {
            s = max(s + nums[i], nums[i]);
            res = max(res, s);
        }
        return res;
    }
};
```