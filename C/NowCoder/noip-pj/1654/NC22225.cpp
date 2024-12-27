#include <iostream>
using namespace std;
int a[10000];
int main(){
    char x;
    while(cin>>x){
        if(x!=' ') a[x]++;
    }
    for(int i='a';i<='z';i++){
        if(a[i]!=0) printf("%c:%d\n",i,a[i]);
    } 
}