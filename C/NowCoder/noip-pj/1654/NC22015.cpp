#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int max=a,min=b;
    if(max<b){
        max=b;
    }
    if(max<c){
        max=c;
    }
    if(min>a){
        min=a;
    }
    if(min>c){
        min=c;
    }
    cout<<"The maximum number is : "<<max<<endl;
    cout<<"The minimum number is : "<<min<<endl;
}