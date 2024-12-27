#include <iostream> 
using namespace std;
int main(){
    int n,arr[110];
    while(cin>>n){
        float average;
        int x,sum=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            sum+=arr[i];
        }
        average=(float)sum/n;
        for(int i=0;i<n;i++){
            if(arr[i]<average){
                cout<<arr[i]<<" ";
            }
        }
        cout<<endl;
    }
}