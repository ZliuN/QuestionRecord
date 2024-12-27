#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[15][15]={0},x=1,y=1,mark=1;
    arr[x][y]=mark;
    while(mark<n*n){
        //往右走
        while(arr[x][y+1]==0&&y+1<=n){
            y++;mark++;
            arr[x][y]=mark;
        }
        //往下走
        while(arr[x+1][y]==0&&x+1<=n){
            x++;mark++;
            arr[x][y]=mark;
        }
        //往左走
        while(arr[x][y-1]==0&&y-1>=1){
            y--;mark++;
            arr[x][y]=mark;
        }
        //往上走
        while(arr[x-1][y]==0&&x-1>=1){
            x--;mark++;
            arr[x][y]=mark;
        }
    }
    for(int x=1;x<=n;x++){
        for(int y=1;y<=n;y++){
            printf("%3d",arr[x][y]);
        }
        cout<<endl;
    }
}