#include <bits/stdc++.h>
using namespace std;
int isPrime(int num){
    if(num==1){
        return 0;
    }
    for(int i=2;i<=sqrt(num);i++){
        if(num%i==0){
            return 0;
        }
    }
    return 1;
}
int main(){
    int n,x=0;
    cin>>n;
    int a[105],b[105];
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(isPrime(a[i])==1){
            cout<<a[i]<<" ";
        }
    }
    
}