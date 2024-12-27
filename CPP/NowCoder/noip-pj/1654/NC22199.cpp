#include <iostream>
using namespace std;
int main(){
    int a,sum=0,num;
    cin>>a;
    while(a>0){
        num=a%10;
        a/=10;
        sum+=num;
    }
    cout<<sum;
}