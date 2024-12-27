#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string name,max_name;
    long long math,chinese,english,sum=0,max_sum=0;
    long long max_chinese=0,max_math=0,max_english=0;
    cin>>max_name>>max_chinese>>max_math>>max_english;
    max_sum=max_chinese+max_math+max_english;
    for(int i=1;i<n;i++){
        cin>>name>>chinese>>math>>english;
        sum=chinese+math+english;
        if(sum>max_sum){
            max_sum=sum;
            max_name=name;
            max_chinese=chinese;
            max_math=math;
            max_english=english;
        }
    }
    cout<<max_name<<" ";
    printf("%lld %lld %lld",max_chinese,max_math,max_english);
}