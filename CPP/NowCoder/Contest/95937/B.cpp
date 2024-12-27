#include<bits/stdc++.h>
using namespace std;

int t,n,m;
void solve(){
	string a,b;
	cin>>a>>b;
	if(a.find('.')==-1)a+='.';//find查找，没找到返回-1，找到了返回元素所在下标（string类型下标从0开始）
	if(b.find('.')==-1)b+='.';
	int index=b.find('.');//找小数点位置，找a的也行
	if(a.size()<index+6)//a的长度够不够到小数点后 6 位？不够就补'0'
		//string类型可以 + 或者 - 一个字符串，就是在原来的字符串末尾 加上 或者 减去 某一段字符串
		//string(number, 'ch')，构造一段长度为number，全为'ch'的字符串
		a+=string(index+6-a.size()+1,'0');
	if(b.size()<index+6)
		b+=string(index+6-b.size()+1,'0');
	//处理完了a、b就遍历找不同了
	for(int i=0;i<=index+6;i++){
		if(a[i]!=b[i]){
			cout<<"NO";
			return ;
		}
	}
	cout<<"YES";
}
signed main(){
	ios::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	t=1;
	//cin>>t;
	while(t--){
		solve();
	}
	return 0;
}
