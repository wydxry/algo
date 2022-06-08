#include <bits/stdc++.h>
using namespace std;
const int N = 2e5 + 5;
typedef long long ll;
int a[N], b[N], c[N];
int t, n, m, x, k;
string s;
int main()
{
    // freopen("4.in", "r", stdin);
    cin >> t;
    while (t--) {
        cin >> n >> k >> s;
        for (int i = 0; i < n; i++) {
            a[i + 1] = a[i] + (s[i] == 'B' ? 1 : 0);
        }
        int ans = n;
        for (int i = 1; i + k - 1 <= n; i++) {
            ans = min(ans, k + a[i - 1] - a[i + k - 1]);
        }
        cout << ans << endl;
    }
    return 0;
}