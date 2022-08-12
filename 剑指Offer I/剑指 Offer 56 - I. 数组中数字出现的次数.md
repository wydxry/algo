[剑指 Offer 56 - I. 数组中数字出现的次数](https://leetcode.cn/problems/shu-zu-zhong-shu-zi-chu-xian-de-ci-shu-lcof/)]
- 解法一：位运算
```C++
class Solution {
public:
    vector<int> singleNumbers(vector<int>& nums) {
        int res = 0;
        for (auto& c: nums) res ^= c;
        int m = 1;
        while ((res & m) == 0) {
            m <<= 1;
        }
        int a = 0, b = 0;
        for (auto& c: nums) {
            if (c & m) a ^= c;
            else b ^= c;
        }   
        return {a, b};
    }
};
```