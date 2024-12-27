#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    long long a[n],b[m];
    for(int i=0;i<n;i++)scanf("%lld",&a[i]);
    for(int i=0;i<m;i++)scanf("%lld",&b[i]);
    for(int i=0;i<m;i++){
        long long l=0,r=n,mid;
        while(l<r){  
            mid=(l+r)/2;
            if(a[mid]>=b[i])r=mid;
            else l=mid+1;
        }
        if(l>n||a[l]!=b[i])cout<<"-1 ";
        else cout<<l+1<<" ";
    }
}