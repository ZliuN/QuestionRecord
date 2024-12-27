#include <iostream>
using namespace std;
int main(){
    int a,b,differ,x;
    x=0;
    cin>>a>>b;
    if(a==b){
        cout<<a;
        return 0;
    }
    differ=a-b;
    while (differ!=x)
    {
        if(a>b){
            x=a-b;
            a=x;
            differ=b;
        }else{
            x=b-a;
            b=x;
            differ=a;
        }
    }
    cout<<differ;
}