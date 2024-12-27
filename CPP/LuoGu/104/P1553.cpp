#include <bits/stdc++.h>
using namespace std;
//整数翻转
void f0(string s){
    int len=s.length(),mark;
    for(mark = len-1;mark>=0;mark--){
        if(s[mark]!='0')break;
    }
    if(mark<0){
        cout<<0;
        return;
    }
    for(int i=mark;i>=0;i--){
        cout<<s[i];
    }
}
//小数翻转
void f1(string s){
    int m=s.find('.'),len=s.length();
    string s1=s.substr(0,m);
    string s2=s.substr(m+1,len-m-1);
    f0(s1);
    cout<<'.';
    int mark=0;
    for(mark=0;mark<s2.length();mark++){
        if(s2[mark]!='0')break;
    }
    if(mark>=s2.length()){
        cout<<0;
        return;
    }
    for(int i=s2.length()-1;i>=mark;i--){
        cout<<s2[i];
    }
}
//分数翻转
void f2(string s){
    int m=s.find('/'),len=s.length();
    string s1=s.substr(0,m);
    string s2=s.substr(m+1,len-m-1);
    f0(s1);
    cout<<'/';
    f0(s2);
}
//百分数翻转
void f3(string s){
    int m=s.find('%'),len=s.length();
    string s1=s.substr(0,m);
    f0(s1);
    cout<<'%';
}
int main(){
    string s;
    cin>>s;
    if(s.find('/')!= -1){
        f2(s);
    }else if(s.find('.')!= -1){
        f1(s);
    }else if(s.find('%')!= -1){
        f3(s);
    }else {
        f0(s);
    }
    return 0;
}