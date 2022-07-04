[剑指 Offer 10- I. 斐波那契数列](https://leetcode.cn/problems/fei-bo-na-qi-shu-lie-lcof/)

- 解法一：动态规划 时间复杂度O(n),空间复杂度O(n).
```C++
class Solution {
public:
    int f[101] = {0};
    int mod = 1e9 + 7;
    int fib(int n) {
        if (n == 0) return 0;
        if (n == 1) return 1;
        f[0] = 0; f[1] = 1;
        for (int i = 2; i <= n; i++) {
            f[i] = ((long long)f[i - 1] + f[i - 2]) % mod;
        }
        return f[n];
    }
};
```

- 解法二：动态规划 时间复杂度O(n),空间复杂度O(1).
```C++
class Solution {
public:
    int mod = 1e9 + 7;
    int fib(int n) {
        if (n == 0) return 0;
        if (n == 1) return 1;
        int a = 0, b = 1, c;
        for (int i = 2; i <= n; i++) {
            c = ((long long)a + b) % mod;
            a = b;
            b = c; 
        }
        return c;
    }
};
```