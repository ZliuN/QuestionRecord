#include <stdio.h>
int main(){
    int a,b,c;
    char d;
    scanf_s("%d-%d-%d-%c",&a,&b,&c,&d);
    int x = (a*1+(b/100)*2+((b/10)%10)*3+(b%10)*4+(c/10000)*5+((c/1000)%10)*6+((c/100)%10)*7+((c%100)/10)*8+(c%10)*9)%11;
/*
检查字符d是否等于字符'X'.
如果d等于'X',则将d_int赋值为10.
如果d不等于'X',则将d转换为对应的数字.
d-'0'的作用是将字符数字(例如'0'到'9')转换为对应的整数值(例如0到9).
*/
    int d_int=(d=='X')?10:d-'0';
    if(x==d_int||x==d){
        printf("Right");
    }else{
        if (x == 10) {
            printf("%d-%d-%d-X", a, b, c);
        } else {
            printf("%d-%d-%d-%d", a, b, c, x);
        }
    }
}