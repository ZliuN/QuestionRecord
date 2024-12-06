#include <iostream>
#include <iomanip>
#define Pi 3.14159
using namespace std;
int main(){
    double a;
    cin>>a;
    cout<<fixed<<setprecision(6)<<2*Pi*a<<endl;
    cout<<fixed<<setprecision(6)<<Pi*a*a<<endl;
}