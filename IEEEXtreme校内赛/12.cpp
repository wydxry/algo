#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
typedef long long ll;
int n, m, x, y, cnt;
int f[N];
int main()
{
    freopen("12.in", "r", stdin);
    while (cin >> n >> m) {
        int t = 0;
        while(m--) {
            char a;
            int b, c;
            cin >> a >> b >> c;
            if (a == 'U') {
                f[b] = c;
            } else {
                int ans = 0;
                for (int i = b ; i <= c ; i++) {
                    ans = max(ans, f[i]);
                }
                if (t == 0) {
                    cout << ans;
                } else {
                    cout << " " << ans;
                }
                ++t;
            }
        }
        cout << endl;
    }
    return 0;
}