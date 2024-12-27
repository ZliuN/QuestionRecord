#include <iostream> 
using namespace std;
int main(){
    int n,m,max_n=0,max_m=0,x;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>x;
        if(max_n<x){
            max_n=x;
        }
    }
    for(int i=0;i<m;i++){
        cin>>x;
        if(max_m<x){
            max_m=x;
        }
    }
    cout<<max_n+max_m<<endl;
}