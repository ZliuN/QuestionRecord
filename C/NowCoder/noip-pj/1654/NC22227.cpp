#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,m;
    cin>>n>>k>>m;
    int a[105]={0};    //数组元素为0表示未被淘汰，为1表示被淘汰
    int count=n;       //计数器，表示当前还未被淘汰的人数
    while(count!=1){   //仅剩的一人为王
        for(int i=1;i<=m-1;i++){ 
        //报数过程
        while(a[(k+1)%n]) k=(k+1)%n;
        k=(k+1)%n;
        }
         a[k]=1;    //置为淘汰
         count--;   //人数减少
         while(a[k]){    //移动k，至下一轮报数的第一个人
              k=(k+1)%n;
         }
    }
    cout<<k;  //最后一个人被淘汰之后，k移动到了仅剩的一人的序号，直接输出即可
}