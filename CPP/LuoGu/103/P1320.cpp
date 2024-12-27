#include <bits/stdc++.h>
using namespace std;
int main(){
    char a,b='0';
    int n,c,d,ans[40005];
    n=c=d=0;
    while(cin>>a){
        n++;
        if(a==b)ans[c]++;
        else ans[++c]++,b=a;
    }
    cout<<sqrt(n);
    for(int i=0;i<=c;i++) cout<<" "<<ans[i];
}