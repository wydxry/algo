[DP3 跳台阶扩展问题](https://www.nowcoder.com/practice/953b74ca5c4d44bb91f39ac4ddea0fee?tpId=230&tqId=2361300&ru=%2Fpractice%2F953b74ca5c4d44bb91f39ac4ddea0fee&qru=%2Fta%2Fdynamic-programming%2Fquestion-ranking&sourceUrl=%2Fexam%2Foj%3Fpage%3D1%26tab%3D%25E7%25AE%2597%25E6%25B3%2595%25E7%25AF%2587%26topicId%3D230)
- 解法一：动态规划
```C++
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[25] = {0};
    a[0] = 1;
    int n;
    cin >> n;
    if (n < 3) cout << n << endl;
    else {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                if (i >= j) {
                    a[i] += a[i - j];
                }
            }    
        }
        cout << a[n] << endl;
    }
    return 0;
}
```
- 解法二：数学
```C++
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    cout << (1 << (n - 1)) << endl;
    return 0;
}
```