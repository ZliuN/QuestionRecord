#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        int t=0,num=i;
        while(num>0){
            t=t*10+num%10;
            num/=10;
        }
        if(t==i)
            cout<<t<<endl;
    }
}