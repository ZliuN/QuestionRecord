#include <iostream>
using namespace std;
int main(){
    int n,arr[110],m;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    cin>>m;
    int a,b,c;
    for(int i=1;i<=m;i++){
        cin>>a>>b>>c;
        for(int k=a;k<=b;k++){
            arr[k]+=c;
        }
    }
    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }
}