[DP5 有多少个不同的二叉搜索树](https://www.nowcoder.com/practice/16d23f940a084023b3be6019262589dc?tpId=230&tqId=2378307&ru=/exam/oj&qru=/ta/dynamic-programming/question-ranking&sourceUrl=%2Fexam%2Foj%3Fpage%3D1%26tab%3D%25E7%25AE%2597%25E6%25B3%2595%25E7%25AF%2587%26topicId%3D230)
```C++
#include <bits/stdc++.h>
using namespace std;
int a[25], n;
int main()
{
    cin >> n;
    if (n < 3) cout << n << endl;
    else {
        a[0] = 1;
        a[1] = 1;
        a[2] = 2;
        for (int i = 3; i <= n; i++) {
            for (int j = 0; j < i; j++) {
                a[i] += a[j] * a[i - j - 1];
            }
        }
        cout << a[n] << endl;
    }
    
    return 0;
}
```