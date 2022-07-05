[剑指 Offer 21. 调整数组顺序使奇数位于偶数前面](https://leetcode.cn/problems/diao-zheng-shu-zu-shun-xu-shi-qi-shu-wei-yu-ou-shu-qian-mian-lcof/)

- 解法一：双指针 时间复杂度O(n),空间复杂度O(1).
```C++
class Solution {
public:
    vector<int> exchange(vector<int>& nums) {
        int i = 0, j = nums.size() - 1;
        while (i < j) {
            while (i < j && nums[i] % 2 == 1) i++;
            while (i < j && nums[j] % 2 == 0) j--;
            if (i < j) swap(nums[i], nums[j]);
        }
        return nums;
    }
};
```

