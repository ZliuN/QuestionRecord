#include <bits/stdc++.h>
using namespace std;
int arr[42][42]={0};
int main(){
    int n,x,y;
    cin>>n;
    x=1;
    y=(n+1)/2;
    arr[x][y]=1;
    for(int i=2;i<=n*n;i++){
        if(x==1&&y!=n){
            x=n;
            y++;
        }else if(y==n&&x!=1){
            y=1;
            x--;
        }else if(x==1&&y==n){
            x++;
        }else if(x!=1&&y!=n){
            if(arr[x-1][y+1]==0){
                x--;
                y++;
            }else{
                x++;
            }
        }
        arr[x][y]=i;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}