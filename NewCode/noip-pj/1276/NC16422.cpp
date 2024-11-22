#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main(){
    int n,q,a,b,x;
    bool found=false;
    cin>>n>>q;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    while(cin>>a>>b){
        x=(int)pow(10,a);
        found=false;
        for(int i=0;i<n;i++){
            if(arr[i]%x==b){
                found=true;
            }
            if(found){
                cout<<arr[i]<<endl;
                break;
            }
            if(i==n-1){
                cout<<"-1"<<endl;
            }
        }
    }
}