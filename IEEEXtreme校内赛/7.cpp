#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 5;
typedef long long ll;
int t, n, m;
int a, b, c;
int x, y, z;
string s;
int main()
{
    // freopen("7.in", "r", stdin);
    while (cin >> s) {
        unordered_map<char, int> mp;
        int ans = 0;
        for (auto& c: s) {
            mp[c]++;
            ans = max(ans, mp[c]);
        }
        cout << ans << endl;
    }
    return 0;
}