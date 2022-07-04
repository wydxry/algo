[剑指 Offer 05. 替换空格](https://leetcode.cn/problems/ti-huan-kong-ge-lcof/)

- 解法一：模拟 时间复杂度O(n), 空间复杂度O(n).
```C++
class Solution {
public:
    string replaceSpace(string s) {
        string res;
        for (auto& c: s) {
            if (c == ' ') {
                res.push_back('%');
                res.push_back('2');
                res.push_back('0');
            }
            else res.push_back(c);
        }
        return res;
    }
};
```