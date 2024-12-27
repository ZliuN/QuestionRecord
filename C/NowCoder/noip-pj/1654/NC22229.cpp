#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[20],b[20]={0};
    for(int i=0;i<n;i++){
        cin>>a[i];
        for(int j=0;j<=i;j++){
            if(a[i]==a[j]) b[j]++;
        }
    }
    int max=0,flag;
    for(int k=0;k<n;k++){
        if(b[k]>max){
            max=b[k]; 
            flag=k;
        }
    }
    cout<<a[flag];
}