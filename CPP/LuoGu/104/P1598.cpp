#include <bits/stdc++.h>
using namespace std;
int a[300]={0};
int main(){
    int max=0;
    string s;
    for(int i=1;i<=4;i++){
        getline(cin,s);
        for(int j=0;j<s.length();j++){
            a[s[j]]++;
        }
    }
    for(int i='A';i<='Z';i++){
        if(a[i]>max)max=a[i];
    }
    for(int i=max;i>0;i--){
        for(int j='A';j<'Z';j++){
            if(a[j]>=i)cout<<"*"<<" ";
            else cout<<"  ";
        }
        if(a['Z']>=i)cout<<"*";
        else cout<<" ";
        cout<<endl;
    }
    for(char i='A';i<'Z';i++){
        cout<<i<<" ";
    }
    cout<<"Z";
}