#include <iostream>
using namespace std;
int main(){
    int weight;
    cin>>weight;
    if(weight%2==0&&weight!=2){
        cout<<"YES, you can divide the watermelon into two even parts.";
    }else{
        cout<<"NO, you can't divide the watermelon into two even parts.";
    }
}