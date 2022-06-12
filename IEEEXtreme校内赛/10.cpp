#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 5;
typedef long long ll;
int n, m, x, y, cnt;

int main()
{
    freopen("10.in", "r", stdin);
    while (cin >> n) {
        vector<int> a;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            a.push_back(x);
        }
        cin >> m;
        for (int i = 0; i < m; i++) {
            int x;
            cin >> x;
            a.push_back(x);
        }
        sort(a.begin(), a.end());
        for (int i = 0; i < a.size(); i++) {
            if (i == 0) {
                cout << a[i];
            } else {
                cout << " " << a[i];
            }
        }
        cout << endl;
    }
    return 0;
}