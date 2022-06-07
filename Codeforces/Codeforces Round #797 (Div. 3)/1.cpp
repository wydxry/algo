#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 5;
typedef long long ll;
int t, n, m, x;

int main()
{
    // freopen("1.in", "r", stdin);
    cin >> t;
    while (t--) {
        cin >> n;
        int a = n / 3;
        int b = n / 3;
        int c = n / 3;
        if (n % 3 == 0) {
            ++a;
            --c;
        } else if (n % 3 == 2) {
            a += 2;
            b += 1;
            c -= 1;
        } else {
            a += 2;
            c -=1;
        }

        cout << b << " " << a << " " << c << endl;
    }
    return 0;
}