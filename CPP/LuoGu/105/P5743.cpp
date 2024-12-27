#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,x=1;
    cin>>n;
    for(int i=0;i<n-1;i++){
        x=(x+1)*2;
    }
    cout<<x;
}