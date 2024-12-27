#include <bits/stdc++.h>
using namespace std;
int jc(int num){
    if(num==0) return 1;
    return num*jc(num-1);
}
int main(){
    int n;
    cin>>n;
    cout<<jc(n);
}