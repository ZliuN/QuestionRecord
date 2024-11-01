#include <iostream>
using namespace std;

typedef long long LL;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        LL l,r;
        scanf("%lld%lld",&l,&r);
        auto t1=l+r;  //首项+末项
        auto t2=r-l+1;   //项数
        //所有部分数字之和为3的倍数，则整体字符串数字也为3的倍数
        if(t1%3==0 || t2%3==0) puts("YES");
        else puts("NO");
    }
    return 0;
}