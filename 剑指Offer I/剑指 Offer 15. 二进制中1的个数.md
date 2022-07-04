[剑指 Offer 15. 二进制中1的个数](https://leetcode.cn/problems/er-jin-zhi-zhong-1de-ge-shu-lcof/)

- 解法一：位运算 时间复杂度O(k), 空间复杂度O(1).
```C++
class Solution {
public:
    int hammingWeight(uint32_t n) {
        int res = 0;
        for (int i = 0; i < 32; i++) {
            if ((n >> i) & 1) ++res;
        }
        return res;
    }
};
```
- 解法二：位运算优化 时间复杂度O(logn), 空间复杂度O(1).
```C++
class Solution {
public:
    int hammingWeight(uint32_t n) {
        int res = 0;
        while (n) {
            // x & (x - 1)：把最低位的1变成0
            n &= n - 1;
            ++res;
        }
        return res;
    }
};
```
