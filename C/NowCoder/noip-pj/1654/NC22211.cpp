#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    long long f[n+1];
    f[0]=1,f[1]=1,f[2]=2;
    for(int i=3;i<=n;i++){
        f[i]=f[i-1]+f[i-2];
    }
    cout<<f[n-2];
}