#include <bits/stdc++.h>
using namespace std;
bool isPrime(int t){
    if(t<2) return false;
    for(int i=2;i<t;i++){
        if(t%i==0) return false;
    }
    return true;
}
int main(){
    int arr[150]={0};
    int maxn=0,minn=1000,t;
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++)arr[s[i]]++;
    for(int i=0;i<s.length();i++){
        if(maxn<arr[s[i]])maxn=arr[s[i]];
        if(minn>arr[s[i]])minn=arr[s[i]];
    }
    t = maxn-minn;
    if(isPrime(t)) cout<<"Lucky Word"<<endl<<t;
    else cout<<"No Answer"<<endl<<"0";
}