#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[85]={0};
    int s1,s2,s3;
    cin>>s1>>s2>>s3;
    for(int i=1;i<=s1;i++){
        for(int j=1;j<=s2;j++){
            for(int k=1;k<=s3;k++){
                arr[i+j+k]++;
            }
        }
    }
    int max_count=0;
    int max;
    for(int i=0;i<85;i++){
        if(max_count<arr[i]){
            max_count=arr[i];
            max=i;
        }
    }
    cout<<max;
}