#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,a,b;
    cin>>n;
    string s;
    stringstream stream;
    char flag,t[1000];
    for(int i=1;i<=n;i++){
        cin>>s;
        if(s[0]<='c'&&s[0]>='a'){
            flag=s[0];
            cin>>a>>b;
        }else{
            stream.clear();
            stream << s;
            stream >> a;
            cin>>b;
        }
        if(flag=='a'){
            sprintf(t,"%d+%d=%d",a,b,a+b);
        }else if(flag=='b'){
            sprintf(t,"%d-%d=%d",a,b,a-b);
        }else {
            sprintf(t,"%d*%d=%d",a,b,a*b);
        }
        cout<<t<<endl<<strlen(t)<<endl;
    }
}