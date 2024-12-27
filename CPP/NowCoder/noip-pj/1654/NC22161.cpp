#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    arr[0]=0,arr[1]=1,arr[2]=1;
    for(int i=3;i<=n;i++){
        arr[i]=arr[i-3]+2*arr[i-2]+arr[i-1];
    }
    cout<<arr[n-1];
}