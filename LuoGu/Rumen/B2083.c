#include <stdio.h>

void draw(int a, int b, char c, int f){
    for(int i=1;i<=a;i++){
        for(int j=1;j<=b;j++){
            if(f!=0||i==1||i==a||j==1||j==b){
                printf("%c", c);
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
}
int main(){
    int a,b,f;
    char c;
    scanf("%d %d %c %d", &a,&b,&c,&f);
    draw(a, b, c, f);
    return 0;
}