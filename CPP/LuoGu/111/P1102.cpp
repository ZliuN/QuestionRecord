#include <bits/stdc++.h>
using namespace std;
int n,c,a[200005];
long long ans=0;
int main(){
    cin>>n>>c;
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a,a+n);
    for(int i=0;i<n;i++){
        ans+=upper_bound(a,a+n,a[i]+c)-lower_bound(a,a+n,a[i]+c);
    }
    cout<<ans;
}