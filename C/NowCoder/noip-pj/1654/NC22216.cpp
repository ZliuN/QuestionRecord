#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=1; i<=t; i++){
        int n;
        cin>>n;
        int a[n];
        for(int j=0;j<n;j++)
            cin>>a[j];
        for(int j=0;j<n;j++)
            cout<<a[n-j-1]<<' ';
        cout<<endl;
    }
}