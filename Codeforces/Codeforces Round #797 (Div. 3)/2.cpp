#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
typedef long long ll;
int a[N], b[N];
int t, n, m, x;

int main()
{
    // freopen("2.in", "r", stdin);
    cin >> t;
    while (t--) {
        cin >> n;
        bool ans = true;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
            if (b[i] > a[i]) ans = false;
        }
        vector<int> nums;
        for (int i = 0; i < n; i++) {
            if (b[i] > 0) nums.push_back(a[i] - b[i]);
        }
        if (nums.size() > 1) {
            sort(nums.begin(), nums.end());
            for (int i = 1; i < nums.size(); i++) {
                if (nums[i] != nums[i - 1]) {
                    ans = false;
                    break;
                }
            }
        }
        if (!nums.empty() && ans) {
            for (int i = 0; i < n; i++) {
                if (b[i] == 0 && a[i] > nums[0]) {
                    ans = false;
                    break;
                }
            }
        }
        
        if (ans) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}