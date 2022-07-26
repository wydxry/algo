[DP1 斐波那契数列](https://www.nowcoder.com/practice/ee5d403c1172487f8c7915b3c3d924c6?tpId=230&tqId=2358261&ru=%2Fpractice%2Fee5d403c1172487f8c7915b3c3d924c6&qru=%2Fta%2Fdynamic-programming%2Fquestion-ranking&sourceUrl=%2Fexam%2Foj%3Fpage%3D1%26tab%3D%25E7%25AE%2597%25E6%25B3%2595%25E7%25AF%2587%26topicId%3D230)
```C++
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n == 1 || n == 2) {
        cout << 1 << endl;
    } else {
        int a = 1, b = 1, c = 3;
        for (int i = 3; i <= n; ++i) {
            c = a + b;
            a = b;
            b = c;
        }
        cout << c << endl;
    }
    
    return 0;
}
```