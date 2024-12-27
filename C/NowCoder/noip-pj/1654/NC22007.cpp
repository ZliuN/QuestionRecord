#include <iostream>
using namespace std;
int main(){
    int a, b, c;
    cin>>a>>b;
    c=a+b;
    cout<<a<<"+"<<b<<"="<<c<<endl;
    printf("%7d\n+%6d\n-------\n%7d",a,b,c);
    return 0;
}