#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int maxn = 1e5 + 10;
const int mod = 1e9 + 7;

ll f[maxn];
int main(){
    f[0] = 1, f[1] = 2, f[2] = 3, f[3] = 4;	
    for(int i = 4; i <= 1e5; ++i){
        f[i] = (f[i - 1] + f[i - 3]) % mod;		//每次取mod防止f[i]爆数据范围
    }
    ll x;
    cin >> x;
    cout << f[x];
    return 0;
}
