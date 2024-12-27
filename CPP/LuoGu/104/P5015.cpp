#include <bits/stdc++.h>
using namespace std;
int main(){
    int ans;
    string s;
    getline(cin,s);
    ans=s.length();
    for(int i=0;i<s.length();i++){
        if(s[i]==' '){
            ans--;
        }
    }
    cout<<ans;
}