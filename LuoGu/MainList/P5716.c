#include <stdio.h>
int isLeap(int y);
int main(){
    int y,m;//一个年份n，一个月份m
    scanf("%d %d",&y,&m);//简单输入
    int day[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};//建表（此时二月是按照平年算）
    if(y%4==0&&y%100!=0||y%400==0)//特判闰年
    day[2]=29;//闰年2月29天
    printf("%d",day[m]);//输出
    return 0;
}