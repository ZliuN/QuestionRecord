#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,ans=0;
    string s;
    cin>>n>>s;
    for(int i=0;i<n-1;i++){
        if(s[i]=='V'&&s[i+1]=='K'){
            ans++;
            s[i]='A';
            s[i+1]='A';
        }
    }
    for(int i=0;i<n-1;i++){
        if(s[i]=='V'&&s[i+1]=='V'){
            ans++;
            break;
        }
        if(s[i]=='K'&&s[i+1]=='K'){
            ans++;
            break;
        }
    }
    cout<<ans;
}