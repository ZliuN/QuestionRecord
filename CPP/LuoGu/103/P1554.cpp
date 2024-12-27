#include <bits/stdc++.h>
using namespace std;
int main(){
    int m,n,x,a;
    int count_0=0,count_1=0,count_2=0,count_3=0,count_4=0,count_5=0,count_6=0,count_7=0,count_8=0,count_9=0;
    cin>>m>>n;
    for(int i=m;i<=n;i++){
        a=i;
        while(a>0){
            x=a%10;
            a/=10;
            switch(x){
                case 0:count_0++;break;
                case 1:count_1++;break;
                case 2:count_2++;break;
                case 3:count_3++;break;
                case 4:count_4++;break;
                case 5:count_5++;break;
                case 6:count_6++;break;
                case 7:count_7++;break;
                case 8:count_8++;break;
                case 9:count_9++;break;
            }
        }
    }
    printf("%d %d %d %d %d %d %d %d %d %d",count_0,count_1,count_2,count_3,count_4,count_5,count_6,count_7,count_8,count_9);
}