[剑指 Offer 63. 股票的最大利润](https://leetcode.cn/problems/gu-piao-de-zui-da-li-run-lcof/)
- 解法一：一次遍历 时间复杂度O(n) 空间复杂度O(1)
```C++
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int res = 0, minp = INT_MAX;
        for (auto& p: prices) {
            minp = min(minp, p);
            res = max(res, p - minp);
        }
        return res;
    }
};
```