#include <bits/stdc++.h>
using namespace std;
#define pocket_money 300
int budget[12];
int main(){
    int mum_money=0;
    int balance=0;
    int result_money;
    for(int i=0;i<12;i++)scanf("%d",&budget[i]);
    for(int i=0;i<12;i++){
        balance += pocket_money - budget[i];
        if(balance<0) {
            cout<<"-"<<i+1;
            return 0;
        }
        if(balance/100>0){
            mum_money+=balance/100;
            balance%=100;
        }
    }
    result_money=(mum_money*100)*1.2+balance;
    cout<<result_money;
}