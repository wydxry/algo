[多重背包问题 II](https://www.acwing.com/problem/content/5/)

题目描述：
```
有 N 种物品和一个容量是 V 的背包。

第 i 种物品最多有 si 件，每件体积是 vi，价值是 wi。

求解将哪些物品装入背包，可使物品体积总和不超过背包容量，且价值总和最大。
输出最大价值。

输入格式
第一行两个整数，N，V，用空格隔开，分别表示物品种数和背包容积。

接下来有 N 行，每行三个整数 vi,wi,si，用空格隔开，分别表示第 i 种物品的体积、价值和数量。

输出格式
输出一个整数，表示最大价值。

数据范围
0<N≤1000
0<V≤2000
0<vi,wi,si≤2000
提示：
本题考查多重背包的二进制优化方法。

输入样例
4 5
1 2 3
2 4 1
3 4 3
4 5 2
输出样例：
10
```
- 思路：多重背包模板题 （二进制优化）
```C++
#include <bits/stdc++.h>
using namespace std;
const int N = 1e6 + 5;
int v[N], w[N], f[N], n, V;
int main()
{
    cin >> n >> V;
    int t = 0;
    for (int i = 0; i < n; i++) {
        int x, y, z;
        cin >> x >> y >> z;
        for (int j = 1; j <= z; j *= 2) {
            z -= j;
            w[t] = j * x;
            v[t] = j * y;
            ++t;
        }
        if (z > 0) {
            w[t] = z * x;
            v[t] = z * y;
            ++t;
        }
    }
    for (int i = 0; i < t; i++) {
        for (int j = V; j >= w[i]; j--) {
            f[j] = max(f[j], f[j - w[i]] + v[i]);
        }
    }
    cout << f[V] << endl;
    return 0;
}
```