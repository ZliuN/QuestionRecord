#include <bits/stdc++.h>
using namespace std;
int b[2000005];
int main(){
    int n,t,x;
    cin>>n;
    double a;
    for(int i=0;i<n;i++){
        cin>>a>>t;
        for(int j=1;j<=t;j++){
            x=a*j;
            b[x]=1-b[x];
        }
    }
    for(int i=0;i<2000005;i++){
        if(b[i]==1){
            cout<<i;
            break;
        }
    }
}