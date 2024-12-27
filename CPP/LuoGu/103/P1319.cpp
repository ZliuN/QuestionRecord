#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,t=0,num=0;
	int a,b,i=0;
	cin>>n;
	while(num<n*n){
		cin>>a;
		i++;
		for(b=a;b>=1;b--){
			if(t==n){
				cout<<endl;
				t=0;
			}
			if(i%2==1)cout<<"0";
			else cout<<"1";
			t++;
            num++;
		}
	}
	cout<<endl;
}
