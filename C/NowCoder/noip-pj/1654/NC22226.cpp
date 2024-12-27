#include <iostream>
#define N 1000001 // 定义数组大小
#define NSQRT 1000 // 定义平方根的上限
using namespace std;
int main() {
    int T, n;
    int a[N] = {0}; // 初始化数组，标记质数
    // 使用埃拉托色尼筛法标记非质数
    for (int i = 2; i <= NSQRT; i++) {
        if (a[i] == 0) { // 如果 i 是质数
            for (int j = i * i; j <= N; j += i) {
                a[j] = 1; // 标记 i 的倍数为非质数
            }
        }
    }
    // 计算每个数之前的质数个数
    for (int i = 2; i < N; i++) {
        if (a[i] == 0) {
            a[i] = a[i - 1] + 1; // 如果 i 是质数，质数计数加一
        } else {
            a[i] = a[i - 1]; // 如果 i 不是质数，质数计数不变
        }
    }
    cin >> T; // 读取测试用例数量
    while (T > 0) {
        cin >> n; // 读取每个测试用例的数
        cout << a[n] << endl; // 输出 n 之前的质数个数
        T--; // 减少测试用例计数
    }
}