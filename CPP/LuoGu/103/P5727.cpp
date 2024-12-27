#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,arr[10001];
    cin>>n;
    int x=0;
    if(n==1){
        cout<<"1";
        return 0;
    }
    for(int i=0;i<10000;i++){
        arr[i]=n;
        if(n%2==1)n=n*3+1;
        else n/=2;
        if(n==1){
            arr[i+1]=n;
            x=i;
            break;
        }
    }
    for(int i=x+1;i>=0;i--){
        cout<<arr[i]<<" ";
    }
}