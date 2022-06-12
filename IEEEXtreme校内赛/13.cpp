#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 5;
typedef long long ll;
int n, m, x, y, cnt;
int pr(int x)
{
    int flag = 1;
    for(int i = 2; i * i <= x; i++){
        if(x % i== 0){
            flag = 0;
            break;
        }
    }
    return flag;
}
int main()
{
    freopen("13.in", "r", stdin);
    while (cin >> n) {
        if (pr(n) == 1) cout << 1 << endl;
        else cout << 0 << endl;
    }
    return 0;
}