[剑指 Offer 57. 和为s的两个数字](https://leetcode.cn/problems/he-wei-sde-liang-ge-shu-zi-lcof/)

- 解法一：双指针 时间复杂度O(n)，空间复杂度O(1)
```C++
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i = 0, j = nums.size() - 1;
        while (i < j) {
            if (nums[i] + nums[j] > target) {
                j--;
            } else if (nums[i] + nums[j] == target) return {nums[i], nums[j]};
            else {
                i++;
            }
        }
        return {};
    }
};
```