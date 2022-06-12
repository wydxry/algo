#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 5;
typedef long long ll;
int t, n, m;
int a[N];
ll x, z, k;

int main()
{
    freopen("2.in", "r", stdin);
    while (cin >> k) {
        int ans = 0;
        for (int i = 0; i <= 10000; i++) {
            for (int j = i + 1; j <= 10000; j++) {
                for (int l = 2; l <= 32; l++) {
                    if (pow(i, l) + pow(j, l) + i * l + j * l + pow(l, 2) == k) {
                        // cout << i << " " << j << " " << l << endl;
                        ++ans;
                    } else if (pow(i, l) + pow(j, l) + i * l + j * l + pow(l, 2) > k) break;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}