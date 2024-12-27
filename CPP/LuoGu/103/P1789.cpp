#include <bits/stdc++.h>
using namespace std;
int arr[110][110]={0};
int main(){
    int n,m,k,x,y,o,p;
    cin>>n>>m>>k;
    while(m--){
        cin>>x>>y;
        x+=2;y+=2;
        for(int i=x-1;i<=x+1;i++){
            for(int j=y-1;j<=y+1;j++){
                arr[i][j]=1;
            }
        }
        arr[x+2][y]=1;
        arr[x-2][y]=1;
        arr[x][y+2]=1;
        arr[x][y-2]=1;
    }
    while(k--){
        cin>>o>>p;
        o+=2;p+=2;
        for(int i=o-2;i<=o+2;i++){
            for(int j=p-2;j<=p+2;j++){
                arr[i][j]=1;
            }
        }
    }
    int count=0;
    for(int i=3;i<=n+2;i++){
        for(int j=3;j<=n+2;j++){
            count+= !arr[i][j];
        }
    }
    cout<<count;
}