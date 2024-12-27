#include <bits/stdc++.h>
#define N 20
using namespace std;
char g[N][N],h[N][N];
bool f1(char a[][N],char b[][N]);
bool f2(char a[][N],char b[][N]);
bool f3(char a[][N],char b[][N]);
bool f4(char a[][N],char b[][N]);
bool f51(char a[][N],char b[][N]);
bool f52(char a[][N],char b[][N]);
bool f53(char a[][N],char b[][N]);
bool f6(char a[][N],char b[][N]);
int n;
int main(){
    cin>>n;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
			cin>>g[i][j];
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
			cin>>h[i][j];
	//判断7种情况 
	if(f1(g,h)) cout<<1;
	else if(f2(g,h)) cout<<2;
	else if(f3(g,h)) cout<<3;
	else if(f4(g,h)) cout<<4;
	else if(f51(g,h) || f52(g,h) || f53(g,h)) cout<<5;
	else if(f6(g,h)) cout<<6;
	else cout<<7;
}

//90度
bool f1(char a[][N],char b[][N]){
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
			if(a[i][j]!=b[j][n-i+1])
				return 0;
	return 1;
} 

//180度
bool f2(char a[N][N],char b[N][N]){
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
			if(a[i][j]!=b[n-i+1][n-j+1])
				return 0;
	return 1;
}

//270度
bool f3(char a[N][N],char b[N][N]){
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
			if(a[i][j]!=b[n-j+1][i])
				return 0;
	return 1;
}

//反射
bool f4(char a[N][N],char b[N][N]){
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
			if(a[i][j]!=b[i][n-j+1])
				return 0;
	return 1;
}

//组合转 90°
bool f51(char a[N][N],char b[N][N]){
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
			if(a[i][j]!=b[n-j+1][n-i+1])
				return 0;
	return 1;
}

//组合转 180°
bool f52(char a[N][N],char b[N][N]){
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
			if(a[i][j]!=b[n-i+1][j])
				return 0;
	return 1;
}

//组合转 270°
bool f53(char a[N][N],char b[N][N]){
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
			if(a[i][j]!=b[i][n-j+1])
				return 0;
	return 1;
}

//不改变
bool f6(char a[N][N],char b[N][N]){
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
			if(a[i][j]!=b[i][j])
				return 0;
	return 1;
}