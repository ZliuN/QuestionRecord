#include <iostream>
using namespace std;
int main(){
    int n,x=1,sum=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int k=1;k<=i;k++){
            x*=k;
        }
        sum+=x;
        x=1;
    }
    cout<<sum;
}