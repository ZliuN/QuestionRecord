#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string name[1000];
    int chinese[1000],math[1000],english[1000],sum[1000];
    for(int i=0;i<n;i++){
        cin>>name[i]>>chinese[i]>>math[i]>>english[i];
        sum[i]=chinese[i]+math[i]+english[i];
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(abs(sum[i]-sum[j])<=10&&abs(chinese[i]-chinese[j])<=5&&abs(math[i]-math[j])<=5&&abs(english[i]-english[j])<=5){
                cout<<name[i]<<" "<<name[j]<<endl;
            }
        }
    }
}