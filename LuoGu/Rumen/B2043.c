#include <stdio.h>

int main(){
    int x;
    scanf("%d", &x);
    if(0==x%3){
        printf("3 ");
    }
    if(0==x%5){
        printf("5 ");
    }
    if(0==x%7){
        printf("7 ");
    }
    if(0!=x%7&&0!=x%5&&0!=x%3){
        printf("n");
    }
}