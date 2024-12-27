#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m,arr[105][25],x;
    double average[105];
    cin>>n>>m;
    if(m<=2){
        cout<<"0.00";
        return 0;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>x;
            arr[i][j]=x;
        }
    }
    for(int i=0;i<n;i++){
        sort(arr[i],arr[i]+m);
        int sum=0;
        for(int j=1;j<m-1;j++){
            sum+=arr[i][j];
        }
        average[i]=(double)sum/(m-2);
    }
    sort(average,average+n);
    cout<<fixed<<setprecision(2)<<average[n-1];
}