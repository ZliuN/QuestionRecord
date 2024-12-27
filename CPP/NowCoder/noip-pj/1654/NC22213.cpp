#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n,a,b;
    cin>>n;
    for(a=sqrt(n);a>0;a--){
        if(n%a==0){
            b=n/a;
            break;
        }
    }
    cout<<a<<" "<<b;
}