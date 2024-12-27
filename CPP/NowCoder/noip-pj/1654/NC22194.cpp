#include <iostream>
using namespace std;
int main(){
    int n,a,b;
    cin>>n;
    for(int i=1000;i<=n;i++){
        a=i/100;
        b=i%100;
        if((a+b)*(a+b)==i)cout<<i<<endl;
    }
}