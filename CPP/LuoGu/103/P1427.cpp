#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,x,a[102];
    for(int i=0;;i++){
        scanf("%d",&a[i]);
        if(a[i]==0) break;
        n=i;
    }
    for(int i=n;i>=0;i--)cout<<a[i]<<" ";
}