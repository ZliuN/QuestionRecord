#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[25][25]= {1};
    for(int i=1;i<=n;i++){
        arr[i][1]=1;
        for(int j=2;j<=i;j++){
            arr[i][j]=arr[i-1][j]+arr[i-1][j-1];
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}