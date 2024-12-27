#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    int count_boy=0,count_girl=0;
    cin>>s;
    for(int i=0;i<s.length()-3;i++){
        if(s[i]=='g'&&s[i+1]=='i'&&s[i+2]=='r'&&s[i+3]=='l'){
            count_girl++;
            s[i]='a';
            s[i+1]='a';
            s[i+2]='a';
            s[i+3]='a';
        }
    }
    for(int i=0;i<s.length()-2;i++){
        if(s[i]=='b'&&s[i+1]=='o'&&s[i+2]=='y'){
            count_boy++;
            s[i]='a';
            s[i+1]='a';
            s[i+2]='a';
        }
        if(s[i]=='g'&&s[i+1]=='i'&&s[i+2]=='r'){
            count_girl++;
            s[i]='a';
            s[i+1]='a';
            s[i+2]='a';
        }
        if(s[i]=='i'&&s[i+1]=='r'&&s[i+2]=='l'){
            count_girl++;
            s[i]='a';
            s[i+1]='a';
            s[i+2]='a';
        }
    }
    for(int i=0;i<s.length()-2;i++){
        if(s[i]=='b'&&s[i+1]=='o'){
            count_boy++;
            s[i]='a';
            s[i+1]='a';
        }
        if(s[i]=='o'&&s[i+1]=='y'){
            count_boy++;
            s[i]='a';
            s[i+1]='a';
        }
        if(s[i]=='g'&&s[i+1]=='i'){
            count_girl++;
            s[i]='a';
            s[i+1]='a';
        }
        if(s[i]=='i'&&s[i+1]=='r'){
            count_girl++;
            s[i]='a';
            s[i+1]='a';
        }
        if(s[i]=='r'&&s[i+1]=='l'){
            count_girl++;
            s[i]='a';
            s[i+1]='a';
        }
    }
    for(int i=0;i<s.length();i++){
        if(s[i]=='b'||s[i]=='o'||s[i]=='y'){
            count_boy++;
            s[i]='a';
        }
        if(s[i]=='g'||s[i]=='i'||s[i]=='r'||s[i]=='l'){
            count_girl++;
            s[i]='a';
        }
    }
    cout<<count_boy<<endl;
    cout<<count_girl<<endl;
}