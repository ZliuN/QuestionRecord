#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    if (n >= 90 && n <= 100) {
        printf("A");
    } else if (n >= 80 && n <= 89) {
        printf("B");
    } else if (n >= 70 && n <= 79) {
        printf("C");
    } else if (n >= 60 && n <= 69) {
        printf("D");
    } else if (n <=59&& n >=0){
        printf("E");
    } else {;
        printf("F");
    }
}