#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
typedef long long ll;
int n, m, x, y, cnt;
int a[N];
int main()
{
    freopen("11.in", "r", stdin);
    while (cin >> n) {
        int ans = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int maxv = a[0];
        for (int i = 1; i < n; i++) {
            maxv = max(maxv, a[i]);
            ans = max(ans, maxv - a[i]);
        }
        cout << ans << endl;
    }
    return 0;
}