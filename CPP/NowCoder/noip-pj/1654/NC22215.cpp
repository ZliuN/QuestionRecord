#include <iostream>
#include <cmath>
using namespace std;
int main(){
    unsigned int a,b;
    cin>>a>>b;
    while(b!=0){
        int temp=b;
        b=a%b;
        a=temp;
    }
    cout<<a<<endl;
}