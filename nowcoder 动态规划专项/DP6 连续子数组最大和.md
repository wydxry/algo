[DP6 连续子数组最大和](https://www.nowcoder.com/practice/1718131e719746e9a56fb29c40cc8f95?tpId=230&tqId=2225856&ru=/exam/oj&qru=/ta/dynamic-programming/question-ranking&sourceUrl=%2Fexam%2Foj%3Fpage%3D1%26tab%3D%25E7%25AE%2597%25E6%25B3%2595%25E7%25AF%2587%26topicId%3D230)
```C++
#include <bits/stdc++.h>
using namespace std;
const int N = 2e5 + 10;
int a[N], n;
int main()
{
    cin >> n;
    for (int i = 0; i < n; ++i) cin >> a[i];
    int res = a[0], sum = a[0];
    for (int i = 1; i < n; ++i) {
        sum = max(a[i], sum + a[i]);
        res = max(res, sum);
    }
    cout << res << endl;
    return 0;
}
```