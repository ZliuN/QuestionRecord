#include <iostream>
using namespace std;
int main(){
    int hour1,min1,hour2,min2;
    cin>>hour1>>min1;
    cin>>hour2>>min2;
    cout<<(hour2*60+min2)-(hour1*60+min1);
}