[剑指 Offer 45. 把数组排成最小的数](https://leetcode.cn/problems/ba-shu-zu-pai-cheng-zui-xiao-de-shu-lcof/)
- 解法一：贪心
```C++
class Solution {
public:
    string minNumber(vector<int>& nums) {
        vector<string> strs;
        for (auto& c: nums) {
            strs.push_back(to_string(c));
        }
        sort(strs.begin(), strs.end(), [&](const string& a, const string& b) {
            return a + b < b + a;
        });
        string res = "";
        for (auto& s: strs) {
            res += s;
        }
        return res;
    }
};
```