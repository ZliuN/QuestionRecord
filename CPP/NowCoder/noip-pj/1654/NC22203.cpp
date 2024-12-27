#include<bits/stdc++.h>
using namespace std;
int n;
int main(){
    while(scanf("%d",&n)!=EOF){
        int len=2*n-1;
        for (int i=1;i<=n;i++){
            int hav=2*i-1;
            int rem=(len-hav)/2;
            for (int j=1;j<=rem;j++) putchar(' ');
            for (int j=1;j<=hav;j++) putchar('*');
            for (int j=1;j<=rem;j++) putchar(' ');
            puts("");
        }
    }
}