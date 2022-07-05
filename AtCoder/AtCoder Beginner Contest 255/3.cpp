#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 5;
typedef long long ll;
const double eps = 1e-7;
ll x, a, d, n;

int main()
{
    freopen("3.in", "r", stdin);
    while (cin >> x >> a >> d >> n) {
        if (d == 0 || n == 1) {
            cout << abs(x - a) << endl;
            continue;
        }
        ll minv = a, maxv = a + (n - 1) * d;
        if (d < 0) swap(minv, maxv);
        if (x <= minv) {
            cout << minv - a << endl;
            continue;
        }
        if (x >= maxv) {
            cout << x - maxv << endl;
            continue;
        }
        ll l = 0, r = n - 1, mid;
        ll ans = min(abs(x - minv), abs(x - maxv));
        if (d < 0) d = -d;
        while (l < r) {
            mid = (l + r) / 2;
            if (minv + mid * d < x) {
                l = mid + 1;
            } else break;
        }
        l = mid;
        // cout << "minv " << minv << " maxv " << maxv << " l " << l << endl;
        ans = min(ans, abs(x - (a + l * d)));
        if (l + 1 < n) {
            ans = min(ans, abs(x - (a + (l + 1) * d)));
        }
        if (l - 1 >= 0) {
            ans = min(ans, abs(x - (a + (l - 1) * d)));
        }
        cout << ans << endl;
    }
    return 0;
}