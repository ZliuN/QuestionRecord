#include <iostream>
using namespace std;
int main(){
    int a,b,count=0;
    cin>>a>>b;
    for(int i=a;i<=b;i++){
        int m=i;
        int sum=0;
        while (m)
        {
            sum+=m%10;
            m/=10;
        }
        if(sum%5==0){
            count++;
        }
    }
    cout<<count;
}