#include <bits/stdc++.h>
using namespace std;

int main() {
    int q, a, b, c;
    cin >> q;
    string str, str_1, str_2, ans_str;
    cin >> str;
    ans_str = str;
    while (q--) {
        cin >> a;
        switch (a) {
            case 1:
                cin>>str_1;
                ans_str+=str_1;
                cout<<ans_str<<endl;
                break;
            case 2:
                cin >> b >> c;
                ans_str = ans_str.substr(b, c);
                cout<<ans_str<<endl;
                break;
            case 3:
                cin>>b>>str_1;
                ans_str.insert(b, str_1);
                cout<<ans_str<<endl;
                break;
            case 4:
                cin>>str_1;
                if(ans_str.find(str_1)<=500){
                    cout<<ans_str.find(str_1)<<endl;
                }else {
                    cout<<"-1"<<endl;
                }
                break;
        }
    }
    return 0;
}