#include <bits/stdc++.h>
using namespace std;
bool isPalindrome(int n){
    int s=0,k=n;
    while(k!=0){
        s*=10;
        s+=k%10;
        k/=10;
    }
    if(n==s)return true;
    else return false;
}
bool isPrime(int n){
    for(int i=3;i<=sqrt(n);i+=2){
        if(n%i==0) return false;
    }
    return true;
}
int main(){
    int a,b;
    cin>>a>>b;
    if(a%2==0) a++;
    if(b>=10000000) b=10000000;
    for(int i=a;i<=b;i+=2){
        if(isPalindrome(i)&&isPrime(i)){
            cout<<i<<endl;
        }
    }
}