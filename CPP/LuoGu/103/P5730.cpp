#include <bits/stdc++.h>
using namespace std;
char s[105];
int main(){
    int n;
    cin>>n;
    cin>>s;
    //第1行
    for(int i=0;i<n;i++){
        switch (s[i]){
        case '0':cout<<"XXX";break;
        case '1':cout<<"..X";break;
        case '2':cout<<"XXX";break;
        case '3':cout<<"XXX";break;
        case '4':cout<<"X.X";break;
        case '5':cout<<"XXX";break;
        case '6':cout<<"XXX";break;
        case '7':cout<<"XXX";break;
        case '8':cout<<"XXX";break;
        case '9':cout<<"XXX";break;
        }
        if(i!=n-1){
            cout<<".";
        }
    }
    //2
    cout<<endl;
    for(int i=0;i<n;i++){
        switch (s[i]){
        case '0':cout<<"X.X";break;
        case '1':cout<<"..X";break;
        case '2':cout<<"..X";break;
        case '3':cout<<"..X";break;
        case '4':cout<<"X.X";break;
        case '5':cout<<"X..";break;
        case '6':cout<<"X..";break;
        case '7':cout<<"..X";break;
        case '8':cout<<"X.X";break;
        case '9':cout<<"X.X";break;
        }
        if(i!=n-1){
            cout<<".";
        }
    }
    //3
    cout<<endl;
    for(int i=0;i<n;i++){
        switch (s[i]){
        case '0':cout<<"X.X";break;
        case '1':cout<<"..X";break;
        case '2':cout<<"XXX";break;
        case '3':cout<<"XXX";break;
        case '4':cout<<"XXX";break;
        case '5':cout<<"XXX";break;
        case '6':cout<<"XXX";break;
        case '7':cout<<"..X";break;
        case '8':cout<<"XXX";break;
        case '9':cout<<"XXX";break;
        }
        if(i!=n-1){
            cout<<".";
        }
    }
    //4
    cout<<endl;
    for(int i=0;i<n;i++){
        switch (s[i]){
        case '0':cout<<"X.X";break;
        case '1':cout<<"..X";break;
        case '2':cout<<"X..";break;
        case '3':cout<<"..X";break;
        case '4':cout<<"..X";break;
        case '5':cout<<"..X";break;
        case '6':cout<<"X.X";break;
        case '7':cout<<"..X";break;
        case '8':cout<<"X.X";break;
        case '9':cout<<"..X";break;
        }
        if(i!=n-1){
            cout<<".";
        }
    }
    //5
    cout<<endl;
    for(int i=0;i<n;i++){
        switch (s[i]){
        case '0':cout<<"XXX";break;
        case '1':cout<<"..X";break;
        case '2':cout<<"XXX";break;
        case '3':cout<<"XXX";break;
        case '4':cout<<"..X";break;
        case '5':cout<<"XXX";break;
        case '6':cout<<"XXX";break;
        case '7':cout<<"..X";break;
        case '8':cout<<"XXX";break;
        case '9':cout<<"XXX";break;
        }
        if(i!=n-1){
            cout<<".";
        }
    }
}