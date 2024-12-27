#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,number[7],x,count=0;
    int at,a1,a2,a3,a4,a5,a6;
    at=a1=a2=a3=a4=a5=a6=0;
    cin>>n;
    for(int i=0;i<7;i++){
        cin>>number[i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<7;j++){
            scanf("%d",&x);
            for(int k=0;k<7;k++){
                if(x==number[k]) count++;
            }
        }
        switch (count){
        case 7:at++;break;
        case 6:a1++;break;
        case 5:a2++;break;
        case 4:a3++;break;
        case 3:a4++;break;
        case 2:a5++;break;
        case 1:a6++;break;
        default:break;
        }
        count=0;
    }
    printf("%d %d %d %d %d %d %d",at,a1,a2,a3,a4,a5,a6);
}