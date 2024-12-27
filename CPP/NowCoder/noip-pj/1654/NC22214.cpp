#include <iostream>
using namespace std;
int main(){
    int a,b,c,count=0;
    cin>>a>>b>>c;
    for(int i=1;i<=c/a;i++){
        if((c-(i*a))%b==0){
            count++;
        }
    }
    if(count>=1){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
}