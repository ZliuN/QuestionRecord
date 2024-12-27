#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,count=0;
    cin>>n;
    int score[3][n];
    int overall_score[n];
    for(int i=0;i<n;i++)scanf("%d %d %d",&score[0][i],&score[1][i],&score[2][i]);
    for(int i=0;i<n;i++)overall_score[i]=score[0][i]+score[1][i]+score[2][i];
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(abs(score[0][i]-score[0][j])<=5&&abs(score[1][i]-score[1][j])<=5&&abs(score[2][i]-score[2][j])<=5&&abs(overall_score[i]-overall_score[j])<=10){
                count++;
            }
        }
    }
    cout<<count;
}