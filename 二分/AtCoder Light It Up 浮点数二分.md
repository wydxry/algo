[AtCoder Beginner Contest 255 B - Light It Up](https://atcoder.jp/contests/abc255/tasks/abc255_b)
```C++
#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 5;
typedef long long ll;
int n, k;
int a[N], b[N];
int f[N];
const double eps = 1e-7;
int main()
{
    // 浮点数二分
    // freopen("2.in", "r", stdin);
    while (cin >> n >> k) {
        for (int i = 0; i < k; i++) {
            cin >> f[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> a[i] >> b[i];
        }
        double ans = 0;
        double l = 0, r = 500005;
        while (r - l > eps) {
            double mid = (l + r) / 2;
            bool flag1 = true;
            for (int i = 0; i < n; i++) {
                bool flag2 = false;
                for (int j = 0; j < k; j++) {
                    int x1 = a[f[j] - 1], y1 = b[f[j] - 1], x2 = a[i], y2 = b[i];
                    if (1.0 * (x1 - x2) * (x1 - x2) + 1.0 *(y1 - y2) * (y1 - y2) <= mid * mid) {
                        flag2 = true;
                        break;
                    }
                }
                if (flag2 == false) {
                    flag1 = false;
                    break;
                }
            }
            if (flag1 == true) {
                r = mid;
            } else {
                l = mid;
            }
        }
        printf("%.12f\n", l);
    }
    return 0;
}
```