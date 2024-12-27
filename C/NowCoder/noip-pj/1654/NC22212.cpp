#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int a[5][5];
    int n,m,x;
    for(int i=0;i<5;i++){
        for(int k=0;k<5;k++){
            cin>>x;
            a[i][k]=x;
            if(a[i][k]==1){
                n=i;
                m=k;
            }
        }
    }
    cout<<abs(n-2)+abs(m-2);
}