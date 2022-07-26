[DP4 最小花费爬楼梯](https://www.nowcoder.com/practice/9b969a3ec20149e3b870b256ad40844e?tpId=230&tqId=2366449&ru=/exam/oj&qru=/ta/dynamic-programming/question-ranking&sourceUrl=%2Fexam%2Foj%3Fpage%3D1%26tab%3D%25E7%25AE%2597%25E6%25B3%2595%25E7%25AF%2587%26topicId%3D230)
```C++
#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
int a[N], n, f[N];
int main()
{
    cin >> n;
    for (int i = 0; i < n; ++i) cin >> a[i];
    f[0] = 0;
    f[1] = 0;
    for (int i = 2; i <= n; i++) {
        f[i] = min(f[i - 2] + a[i - 2], f[i - 1] + a[i - 1]);
    }
    cout << f[n] << endl;
    return 0;
}
```