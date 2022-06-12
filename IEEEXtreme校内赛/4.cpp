#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 5;
typedef long long ll;
int t, n, m;
int a, b, c;
int gcd(int a, int b) {
    while(b%a != 0){
		int t = b % a;
		b = a;
		a = t;
	}
	return a;
}
bool chk(int a, int b) {
    if (gcd(a, b) == 1) return true;
    return false;
} 
int main()
{
    // freopen("4.in", "r", stdin);
    while (cin >> a >> b >> c) {
        if (chk(a, b) && chk(a, c) && chk(b, c)) {
            cout << 0 << endl;
        } else {
            cout << -1 << endl;
        }
    }
    return 0;
}