#include <stdio.h>

int main(){
    char ASCII;
    scanf("%c", &ASCII);
    if ( 1 == ASCII % 2 ){
        printf("YES");
    }else{
        printf("NO");
    }
}