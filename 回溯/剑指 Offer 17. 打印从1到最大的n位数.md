[剑指 Offer 17. 打印从1到最大的n位数](https://leetcode.cn/problems/da-yin-cong-1dao-zui-da-de-nwei-shu-lcof/)

- 解法一：模拟 时间复杂度(10^n), 空间复杂度O(1).
```C++
class Solution {
public:
    vector<int> printNumbers(int n) {
        int m = pow(10, n) - 1;
        vector<int> res(m);
        for (int i = 0; i < m; i++) {
            res[i] = i + 1;
        }
        return res;
    }
};
```
- 解法二：回溯 时间复杂度(10^n), 空间复杂度O(10^n).
```C++
class Solution {
public:
    string s;
    vector<int> res;
    void backtracing(int n) {
        if (s.size() == n) {
            int num = stoi(s);
            if (num) res.push_back(stoi(s));
            return;
        }
        for (char i = '0'; i <= '9'; i++) {
            s.push_back(i);
            backtracing(n);
            s.pop_back();
        }
    }
    vector<int> printNumbers(int n) {
        backtracing(n);
        return res;
    }
};
```