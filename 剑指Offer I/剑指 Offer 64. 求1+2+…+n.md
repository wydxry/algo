[剑指 Offer 64. 求1+2+…+n](https://leetcode.cn/problems/qiu-12n-lcof/)
```C++
class Solution {
public:
    int sumNums(int n) {
        if (n == 1) return 1;
        return n + sumNums(n - 1);
    }
};
```