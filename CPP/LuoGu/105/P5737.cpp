#include <bits/stdc++.h>
using namespace std;
bool isr(int num){
    if(num%4==0&&num%100!=0){
        return true;
    }
    if(num%400==0){
        return true;
    }
    return false;
}
int main(){
    int arr[2002],b=0;
    int x,y;
    cin>>x>>y;
    for(int i=x;i<=y;i++){
        if(isr(i)){
            arr[b]=i;
            b++;
        }
    }
    cout<<b<<endl;
    for(int i=0;i<b;i++){
        cout<<arr[i]<<" ";
    }
}