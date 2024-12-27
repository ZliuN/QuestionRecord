#include <iostream>
using namespace std;
int main(){
    int n,count=0;
    cin>>n;
    for(int a=0;a<=n;a++){
        for(int b=0;b<=n;b+=2){
            for(int c=0;c<=n;c+=5){
                if(a+b+c==n){
                    count++;
                }
            }
        }
    }
    cout<<count<<endl;
}