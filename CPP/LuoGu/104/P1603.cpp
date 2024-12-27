#include <bits/stdc++.h>
using namespace std;
int main(){
    int a[10],k=0;
    string anss[]= {"one","two","three","four","five","six","seven","eight","nine","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen","a","both","another","first","second","third"};
    int ansd[]= {1,2,3,4,5,6,7,8,9,11,12,13,14,15,16,17,18,19,1,2,1,1,2,3};
    string s;
    for(int j=0;j<=6;j++){
        cin>>s;
        for(int i=0;i<24;i++){
            if(s==anss[i]){
                int x=ansd[i];
                x=x*x%100;
                a[k++]=x;
            }
        }
    }
    if(k==0){
        cout<<0;
        return 0;
    }
    sort(a,a+k);
    printf("%d",a[0]);
    for(int i=1;i<k;i++){
        printf("%02d",a[i]);
    }
    return 0;
}