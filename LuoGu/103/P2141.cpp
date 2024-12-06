#include <iostream>
#include <algorithm>
#include <set>
using namespace std;
int main() {
    int arr[105]; // 定义一个大小为105的整数数组
    int n, count = 0; // 定义变量n和count，count初始化为0
    cin >> n; // 从标准输入读取数组大小n
    for (int i = 0; i < n; i++) cin >> arr[i]; // 读取n个整数并存储到数组arr中
    sort(arr, arr + n); // 对数组arr进行排序
    set<int> uniqueResults; // 定义一个集合用于存储满足条件的元素
    for (int i = 0; i < n; i++) { // 遍历数组
        for (int k = i + 1; k < n; k++) { // 遍历数组
            for (int j = k + 1; j < n; j++) { // 遍历数组
                if (arr[i] + arr[k] == arr[j]) { // 检查是否存在三个不同的元素满足条件
                    uniqueResults.insert(arr[j]); // 将满足条件的元素插入集合
                    break; // 跳出最内层循环
                }
            }
        }
    }
    cout << uniqueResults.size(); // 输出满足条件的元素个数
    return 0; // 返回0
}