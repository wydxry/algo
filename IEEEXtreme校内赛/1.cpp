#include <bits/stdc++.h>
using namespace std;
const int N = 1e4 + 5;
typedef long long ll;
int t, n, m, x;

int main()
{
    // freopen("1.in", "r", stdin);
    while (cin >> n) {
        vector<int> a;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            a.push_back(x);
        }
        sort(a.begin(), a.end());
        int ans = 0;
        for (int i = 0; i < n; i++) {
            vector<int> f(a);
            f.erase(f.begin() + i);
            int t = INT_MAX;
            for (int j = 1; j < f.size(); j++) {
                t = min(t, f[j] - f[j - 1]);
            }
            ans = max(ans, t);
        }
        cout << ans << endl;
    }
    return 0;
}