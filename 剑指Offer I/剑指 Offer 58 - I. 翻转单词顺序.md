[剑指 Offer 58 - I. 翻转单词顺序](https://leetcode.cn/problems/fan-zhuan-dan-ci-shun-xu-lcof/)
```C++
class Solution {
public:
    string reverseWords(string s) {
        vector<string> strs;
        int n = s.length();
        int i = 0;
        while (i < n) {
            while (i < n && s[i] == ' ') i++;
            int l = i;
            while (i < n && s[i] != ' ') i++;
            if (i > l) strs.push_back(s.substr(l, i - l));
        }
        if (strs.size() == 0) return "";
        string res = "";
        reverse(strs.begin(), strs.end());
        res = strs[0];
        for (int i = 1; i < strs.size(); i++) {
            res += " ";
            res += strs[i];
        }
        return res;
    }
};
```