#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 5;
typedef long long ll;
int t, n, m, x;
int a, b;
int f[2][2];
int main()
{
    // freopen("1.in", "r", stdin);
    while (cin >> a >> b) {
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                cin >> f[i][j];
            }
        }
        cout << f[a - 1][b - 1] << endl;
    }
    return 0;
}