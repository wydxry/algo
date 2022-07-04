[剑指 Offer 03. 数组中重复的数字](https://leetcode.cn/problems/shu-zu-zhong-zhong-fu-de-shu-zi-lcof/)

- 解法一：哈希 时间复杂度O(n), 空间复杂度O(n)
```C++
class Solution {
public:
    int findRepeatNumber(vector<int>& nums) {
        unordered_map<int, int> mp;
        for (auto& c: nums) {
            if (mp[c] != 0) return c;
            mp[c]++;
        }
        return -1;
    }
};
```
- 解法二：排序 时间复杂度O(nlogn), 空间复杂度O(1)
```C++
class Solution {
public:
    int findRepeatNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == nums[i - 1]) return nums[i];
        }
        return -1;
    }
};
```