#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 5;
typedef long long ll;
int t, n, m;
int a, b, c;
int x, y, z;
int main()
{
    // freopen("5.in", "r", stdin);
    while (cin >> x >> y >> z) {
        vector<int> f(100005);
        queue<int> que;
        que.push(x);
        f[x] = 1;
        int level = 0;
        int ans = 0;
        while (!que.empty()) {
            for (int i = que.size() - 1; i >= 0; i--) {
                int top = que.front();
                que.pop();
                if (top == y) {
                    ans = level;
                    break;
                }
                int d = top + 1;
                if (d >= 1 &&  d <= z && f[d] == 0) {
                    f[d] = 1;
                    que.push(d);
                }
                d = top - 1;
                if (d >= 1 && d <= z && f[d] == 0) {
                    f[d] = 1;
                    que.push(d);
                }
                d = 3 * top;
                if (d >= 1 && d <= z && f[d] == 0) {
                    f[d] = 1;
                    que.push(d);
                }

            }
            level++;
        }
        cout << ans << endl;
    }
    return 0;
}