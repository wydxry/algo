#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 5;
typedef long long ll;
string s;


unordered_map<char, int> h{{'+', 1}, {'-', 1}};

bool eval(stack<int>& num, stack<char>& op) 
{
    if (op.empty() || num.size() < 2) return false;
    int a = num.top(); 
    num.pop();
    int b = num.top(); 
    num.pop();
    char p = op.top(); 
    op.pop();
    int r = 0; 
    if (p == '+')
        r = b + a;
    if (p == '-')
        r = b - a;

    num.push(r); 
    return true;
}

int main()
{
    freopen("3.in", "r", stdin);
    while (cin >> s) {
        stack<int> num;
        stack<char> op;
        int n = s.length();
        bool ans = true;
        for (int i = 1; i < n; i++) {
            if (s[i - 1] == '(' && s[i] == ')') {
                ans = false;
                break;
            }
        }
        for (int i = 0; i < s.size(); i++) {
            if (isalpha(s[i])) {
                int x = 0, j = i; 
                while (j < s.size() && isalpha(s[j])) {
                    x = x * 10 + s[j] - 'a';
                    j++;
                }
                num.push(x); 
                i = j - 1;
            } else if (s[i] == '(') {
                op.push(s[i]);
            } else if (s[i] == ')') {
                while (op.top() != '(') {
                    if (eval(num, op) == false) {
                        ans = false;
                        break;
                    }
                }
                op.pop(); 
            } else {
                while (op.size() && h[op.top()] >= h[s[i]]) {
                    if (eval(num, op) == false) {
                        ans = false;
                        break;
                    }
                }
                op.push(s[i]); 
            }
        }
        while (op.size()) {
            if (eval(num, op) == false) {
                ans = false;
                break;
            }
        }
        if (ans) cout << "valid" << endl;
        else cout << "invalid" << endl;
    }

    return 0;
}