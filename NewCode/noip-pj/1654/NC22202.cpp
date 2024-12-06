#include <iostream>
using namespace std;
int main(){
    char x;
    int count_letter=0,count_num=0,count_other=0;
    while((x = getchar()) != '?'){
        if(x>='0'&&x<='9'){
            count_num++;
        }else if(x>='a'&&x<='z'){
            count_letter++;
        }else if(x>='A'&&x<='Z'){
            count_letter++;
        }else{
            count_other++;
        }
    }
    cout<<"Letters="<<count_letter<<endl;
    cout<<"Digits="<<count_num<<endl;
    cout<<"Others="<<count_other<<endl;
}