#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 5;
typedef long long ll;
int n, m, x, y;

int find(vector<int>& fa, int x){
    if(fa[x] != x){
        fa[x] = find(fa, fa[x]);
    }
    return fa[x];
}

int main()
{
    freopen("9.in", "r", stdin);
    while (cin >> n >> m) {
        vector<int> fa(10005);
        for (int i = 1; i <= n; i++) {
            fa[i] = i;
        }
        while(m--) {
            cin >> x >> y;
            if (x != y && find(fa, x) != find(fa, y)) {
                fa[find(fa, y)] = find(fa, x);
            }
        }
        vector<int> t(10005);
        for (int i = 1; i <= 10005; i++) {
            t[fa[i]]++;
        }
        int ans = 0;
        for (int i = 1; i <= 10005; i++) {
            if (t[i] > 1) {
                ++ans;
            }
        }
        // for (int i = 1; i <= 10005; i++) {
        //     cout << i << " " << fa[i] << " " << t[i] << endl;
        // }
        cout << ans << endl;
    }
    return 0;
}