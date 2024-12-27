#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m,min=3000000,sum=0;
    cin>>n>>m;
    int arr[3005];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(n==m){
        for(int i=0;i<n;i++){
            sum+=arr[i];
        }
        cout<<sum;
        return 0;
    }
    for(int i=0;i<n-m;i++){
        for(int k=0;k<m;k++){
            sum+=arr[i+k];
        }
        if(min>sum){
            min=sum;
        }
        sum=0;
    }
    cout<<min;
}