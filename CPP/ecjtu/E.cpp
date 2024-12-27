#include <bits/stdc++.h>
using namespace std;
int main(){
    char a,b,c;
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>a>>b>>c;
        if(a%3==0||b%3==0||c%3==0)cout<<"LaoSu Like Fake"<<endl;
        else cout<<"LaoSu Don't Like Fake"<<endl;
    }
}