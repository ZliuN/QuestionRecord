#include <bits/stdc++.h>
using namespace std;
int main(){
    char a[105];
    cin>>a;
    for(int i=0;i<strlen(a);i++){
        if(a[i]>='a'&&a[i]<='z'){
            a[i]-=32;
        }
    }
    cout<<a;
}