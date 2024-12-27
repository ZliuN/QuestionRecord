#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int up,down,height;
    cin>>up>>down>>height;
    cout<<fixed<<setprecision(3)<<(up+down)*(double)height/2.0;
}