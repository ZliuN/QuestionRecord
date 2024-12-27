#include <bits/stdc++.h>
using namespace std;
int main(){
    string str;
    int mark=0,win=0,lose=0,a=0,b;
    char x;
    while(cin>>x)mark++,str.push_back(x);
    //11分制
    for(int i=0;i<mark;i++){
        if(str[i]=='W')win++;
        if(str[i]=='L')lose++;
        if(str[i]=='E'){
            cout<<win<<":"<<lose<<endl;
            break;
        }
        if(win-lose>=2||lose-win>=2){
            if(win>=11||lose>=11){
                cout<<win<<":"<<lose<<endl;
                win=0;
                lose=0;
            }
        }
    }
    win=0;
    lose=0;
    cout<<endl;
    //21分制
    for(int i=0;i<mark;i++){
        if(str[i]=='W')win++;
        if(str[i]=='L')lose++;
        if(str[i]=='E'){
            cout<<win<<":"<<lose<<endl;
            break;
        }
        if(win-lose>=2||lose-win>=2){
            if(win>=21||lose>=21){
                cout<<win<<":"<<lose<<endl;
                win=0;
                lose=0;
            }
        }
    }
}