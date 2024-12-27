#include <iostream>
using namespace std;
int main(){
    int a=1;
    for(int i=1;i<=9;i++){
        for(int j=1;j<=a;j++){
            printf("%d*%d=%2d ",j,i,i*j);
        }
        cout<<endl;
        a++;
    }
}