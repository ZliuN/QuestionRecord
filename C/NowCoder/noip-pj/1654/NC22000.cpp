#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<3;i++){
        cout<<n%10;
        n/=10;
    }
}