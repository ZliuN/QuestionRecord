#include <stdio.h>

// 计算最大公约数
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// 计算较小锐角的正弦值并约分
void find_sine_of_smaller_angle(int a, int b, int c) {
    // 找到最小的两个边和斜边
    int min1 = a, min2 = b, hypotenuse = c;
    if (a > b) {
        min1 = b;
        min2 = a;
    }
    if (min2 > c) {
        hypotenuse = min2;
        min2 = c;
    }
    if (min1 > min2) {
        int temp = min1;
        min1 = min2;
        min2 = temp;
    }

    // 计算较小锐角的正弦值
    int numerator = min1;
    int denominator = hypotenuse;

    // 约分
    int divisor = gcd(numerator, denominator);
    numerator /= divisor;
    denominator /= divisor;

    // 输出结果
    printf("%d/%d\n", numerator, denominator);
}

int main(){
    int a, b, c;
    // 读取输入
    scanf("%d %d %d", &a, &b, &c);

    // 直接调用函数计算并输出结果
    find_sine_of_smaller_angle(a, b, c);

    return 0;
}