#include <bits/stdc++.h>
using namespace std;
int main(){
    string s,l;
    getline(cin,s);
    s=" "+s+" "; 
    getline(cin,l);
    l=" "+l+" ";
    int count=0,pos;
    for(int i=0;i<s.length();i++){
        if(s[i]>='a'&&s[i]<='z'){
            s[i]=s[i]-'a'+'A';
        }
    }
    for(int i=0;i<l.length();i++){
        if(l[i]>='a'&&l[i]<='z'){
            l[i]=l[i]-'a'+'A';
        }
    }
    pos=l.find(s,0);
    while(pos!=-1){
        count++;
        pos=l.find(s,pos+1);
    }
    if(count==0){
        cout<<"-1"<<endl;
    }else{
        cout<<count<<" "<<l.find(s);
    }
}