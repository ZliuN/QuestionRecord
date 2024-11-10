#include <stdio.h>
int nature_1(int a);
int nature_2(int a);
int main(){
    int a;
    scanf("%d",&a);
    if(nature_1(a)==1&&nature_2(a)==1){
        printf("1 ");
    }else{
        printf("0 ");
    }
    if(nature_1(a)+nature_2(a)!=0){
        printf("1 ");
    }else{
        printf("0 ");
    }
    if(nature_1(a)+nature_2(a)==1){
        printf("1 ");
    }else{
        printf("0 ");
    }
    if(nature_1(a)+nature_2(a)==0){
        printf("1 ");
    }else{
        printf("0 ");
    }
}
int nature_1(int a){
    if(a%2==0){
        return 1;
    }
    return 0;
}
int nature_2(int a){
    if(a>4&&a<=12){
        return 1;
    }
    return 0;
}