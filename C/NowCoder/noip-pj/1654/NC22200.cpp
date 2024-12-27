#include <iostream>
using namespace std;
bool is_prime(int num){
    if (num < 2) return false;
    for (int i = 2; i <= num / i; i++) {
        if (num % i == 0) return false;
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    int num;
    while(cin>>num){
        if(is_prime(num))cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
}