#include <iostream>
using namespace std;
int main(){
    int n,sum=0,result=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int k=1;k<=i;k++){
            sum+=k;
        }
        result+=sum;
        sum=0;
    }
    cout<<result;
}