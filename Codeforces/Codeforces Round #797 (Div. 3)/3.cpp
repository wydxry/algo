#include <bits/stdc++.h>
using namespace std;
const int N = 2e5 + 5;
typedef long long ll;
int a[N], b[N], c[N];
int t, n, m, x;

int main()
{
    // freopen("3.in", "r", stdin);
    cin >> t;
    while (t--) {
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }
        int pre = 0;
        for (int i = 0; i < n; i++) {
            if (i == 0) {
                if (b[i] > a[i]) c[i] = b[i] - a[i];
                else b[i] = 0;
                pre = b[i];
            } else {
                pre = max(pre, a[i]);
                if (b[i] > pre) {
                    c[i] = b[i] - pre;
                } else {
                    c[i] = 0;
                }
                pre = b[i];
            }
        }
        for (int i = 0; i < n; i++) {
            if (i == 0) cout << c[i];
            else cout << " " << c[i];
        }
        cout << endl;
    }
    return 0;
}