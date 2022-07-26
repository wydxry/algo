[DP2 跳台阶](https://www.nowcoder.com/practice/bfb2a2b3cdbd4bd6bba0d4dca69aa3f0?tpId=230&tqId=2357966&ru=/exam/oj&qru=/ta/dynamic-programming/question-ranking&sourceUrl=%2Fexam%2Foj%3Fpage%3D1%26tab%3D%25E7%25AE%2597%25E6%25B3%2595%25E7%25AF%2587%26topicId%3D230)
```C++
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n == 1) cout << 1 << endl;
    else if (n == 2) cout << 2 << endl;
    else {
        int a = 1, b = 2, c = 3;
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