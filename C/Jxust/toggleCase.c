#include <stdio.h>
#include <stdlib.h>

void toUpperCase(char *str) {
    while (*str) {
        //*str &= 0b11011111;
        *str = (*str & 64) ? *str & 0b11011111 : *str;
        str++;
    }
}

void toLowerCase(char *str) {
    while (*str) {
        //*str |= 0b00100000;
        *str = (*str & 64) ? *str | 0b00100000 : *str;
        str++;
    }
}

void toggleCase(char *str) {
    while (*str) {
        *str = (*str & 64) ? *str ^ 32 : *str;
        str++;
    }
}

void toUpperCase2d(char *str, int row, int col) {
    for (int i = 0; i < row; i++) {
        char *p = str + i * col;
        toUpperCase(p);
    }
}


int main() {
    char msg[] = "WELCOME to jxust";

    printf("Original: %s\n", msg);
    toggleCase(msg);
    printf("Toggled : %s\n", msg);


    char msg2[5][10] = {
            "zhangsan",
            "lisi",
            "wangwu",
            "zhaoliu",
            "sunqi"
    };
    toUpperCase2d(msg2, 5, 10);

    for (int i = 0; i < 5; i++) {
        printf("%s\n", msg2[i]);
    }

    return 0;
}



