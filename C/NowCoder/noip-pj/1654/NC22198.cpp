#include <iostream>
using namespace std;
int main(){
    int n=0,y=0,x,count_a=0,count_b=0,count_c=0;
    while (cin>>x&&x!=-1){
        y++;
        if(x==1)count_a++,n++;
        if(x==2)count_b++,n++;
        if(x==3)count_c++,n++;
    }
    cout<<"A="<<count_a<<endl;
    cout<<"B="<<count_b<<endl;
    cout<<"C="<<count_c<<endl;
    cout<<"Tot="<<n<<endl;
    if(count_a>y/2)cout<<"A-yes";
    if(count_b>y/2)cout<<"B-yes";
    if(count_c>y/2)cout<<"C-yes";
    if(count_a<=y/2&&count_b<=y/2&&count_c<=y/2)cout<<"all-NO";
}