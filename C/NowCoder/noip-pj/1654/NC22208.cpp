#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int n,x=1;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int k=1;k<=i;k++){
            cout<<right<<setw(4)<<x;
            x++;
        }
        cout<<endl;
    }
}