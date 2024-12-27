#include <iostream> 
using namespace std;
int main(){
    int n,local;
    while(cin>>n){
        local=0;
        int x,arr[30];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        cin>>x;
        for(int i=0;i<n;i++){
            if(arr[i]==x){
                cout<<i<<endl;
                local++;
                break;
            }
        }
        if(local==0){
            cout<<"No"<<endl;
        }
    }
}