#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    double x,sum=0,result=0;
    for(int i=1;i<=n;i++){
        for(int k=1;k<=i;k++){
            x=pow(-1,k-1)*(2*k-1);
            sum+=x;
        }
        result+=1/sum;
        sum=0;
    }
    cout<<fixed<<setprecision(3)<<result;
}