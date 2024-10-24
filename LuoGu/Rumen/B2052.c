#include <stdio.h>

int main(){
    char symbols;
    int a,b;
    long long c;
    scanf("%d %d %c", &a, &b, &symbols);
    switch(symbols){
        case '+':
            c = a+b;
            printf("%d", c);
            break;
        case '-':
            c = a-b;
            printf("%d", c);
            break;
        case '/':
            if(0==b){
                printf("Divided by zero!");
                break;
            }else{
                c = a/b;
                printf("%d", c);
                break;
            }
        case '*':
            c = a*b;
            printf("%d", c);
            break;
        default:
            printf("Invalid operator!");
            break;
    }
}