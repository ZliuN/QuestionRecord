#include <iostream>
using namespace std;
int main(){
    int c=getchar();
    for(int i='A';i<=c;i++){
        // 输出每行前面的空格
        for(int j=1;j<=c-i;j++) putchar(' ');
        // 输出从 'A' 到当前字符 i 的字母
        for(int j='A';j<=i;j++) putchar(j);
        // 输出从当前字符 i-1 到 'A' 的字母
        for(int j=i-1;j>='A';j--) putchar(j);
        // 输出换行符
        putchar('\n');
    }
    return 0;
}