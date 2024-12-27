#include <stdio.h>
#include <stdbool.h>
#include <math.h>
bool is_prime(int num) {
    if (num <= 1) return false;
    if (num == 2) return true;
    if (num % 2 == 0) return false;
    for (int i = 3; i <= sqrt(num); i += 2) {
        if (num % i == 0) return false;
    }
    return true;
}
bool is_palindrome(int num) {
    int original = num;
    int reversed = 0;
    while (num > 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    return original == reversed;
}
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    for (int i = a; i <= b; i++) {
        if (is_prime(i) && is_palindrome(i)) {
            printf("%d\n", i);
        }
    }
    return 0;
}