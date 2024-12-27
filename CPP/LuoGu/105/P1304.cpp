#include <bits/stdc++.h>
using namespace std;
bool isprime(int num){
    if(num<=2)return true;
    for(int i=2;i<=sqrt(num);i++){
        if(num%i==0) return false;
    }
    return true;
}
int main(){
    int n,mark=1,oop;
    cin>>n;
    int arr[20000];
    for(int i=2;i<=n;i++){
        if(isprime(i)){
            arr[mark]=i;
            mark++;
        }
    }
    for(int k=4;k<=n;k+=2){
        oop=0;
        for(int j=1;j<=n;j++){
            for(int l=j;l<=n;l++){
                if(arr[j]+arr[l]==k){
                    cout<<k<<"="<<arr[j]<<"+"<<arr[l]<<endl;
                    oop=1;
                }
            }
            if(oop==1)break;
        }
    }
}