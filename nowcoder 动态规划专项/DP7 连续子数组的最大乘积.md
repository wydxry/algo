[DP7 连续子数组的最大乘积](https://www.nowcoder.com/practice/fd8c819c07c9493887bfac8549c119f4?tpId=230&tqId=2368589&ru=/exam/oj&qru=/ta/dynamic-programming/question-ranking&sourceUrl=%2Fexam%2Foj%3Fpage%3D1%26tab%3D%25E7%25AE%2597%25E6%25B3%2595%25E7%25AF%2587%26topicId%3D230)
```C++
#include <bits/stdc++.h>
using namespace std;
const int N = 2e5 + 10;
int a[N], Fmax[N], Fmin[N], n;
int main()
{
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        Fmax[i] = a[i];
        Fmin[i] = a[i];
    }
    for (int i = 1; i < n; i++) {
        Fmax[i] = max(Fmax[i - 1] * a[i], max(Fmin[i - 1] * a[i], a[i]));
        Fmin[i] = min(Fmin[i - 1] * a[i], min(Fmax[i - 1] * a[i], a[i]));
    }
    int res = INT_MIN;
    for (int i = 0; i < n; i++) {
        res = max(res, Fmax[i]);
    }
    cout << res << endl;
    return 0;
}
```