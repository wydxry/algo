[剑指 Offer 10- II. 青蛙跳台阶问题](https://leetcode.cn/problems/qing-wa-tiao-tai-jie-wen-ti-lcof/)

- 解法一：动态规划 时间复杂度O(n)，空间复杂度O(1)
```C++
class Solution {
public:
    int mod = 1e9 + 7;
    int numWays(int n) {
        if (n == 0) return 1;
        if (n == 1) return 1;
        if (n == 2) return 2;
        long long a = 1, b = 2, c = 0;
        for (int i = 3; i <= n; i++) {
            c = (a + b) % mod;
            a = b;
            b = c;
        }
        return c;
    }
};
```