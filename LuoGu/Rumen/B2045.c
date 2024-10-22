#include <stdio.h>

int main(){
    int weekday;
    scanf("%d", &weekday);
    if ( weekday == 1||weekday == 3|| weekday == 5){
        printf("NO");
    }else{
        printf("YES");
    }
}