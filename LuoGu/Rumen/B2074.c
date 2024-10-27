#include <stdio.h>
#include <math.h>

int main(){
    int a,b,c;
    scanf("%d %d", &a, &b);
    int ans = 1;
    for (int i = 1;i<=b;i++){
        ans*=a;
        ans%=7;
    }
    switch(ans){
        case 0: printf("Sunday");break;
        case 1: printf("Monday");break;
        case 2: printf("Tuesday");break;
        case 3: printf("Wednesday");break;
        case 4: printf("Thursday");break;
        case 5: printf("Friday");break;
        case 6: printf("Saturday");break;
    }
    return 0;
}