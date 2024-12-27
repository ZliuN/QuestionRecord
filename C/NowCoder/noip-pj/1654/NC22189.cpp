#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        int x=i;
        bool hasfive=false;
        while(x>0){
            if(x%10==5){
                hasfive=true;
                break;
            }
            x/=10;
        }
        if(hasfive&&i%3==0){
            cout<<i<<endl;
        }
    }
}