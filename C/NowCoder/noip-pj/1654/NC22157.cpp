#include <iostream>
#include<iomanip>
using namespace std;
int main(){
    int n;
    cin>>n;
    double x,sum=0;
    for(int i=1;i<=n;i++){
        x=1.0/i;
        sum+=x;
    }
    cout<<fixed<<setprecision(6)<<sum;
}