#include <bits/stdc++.h>
using namespace std;
struct student{
    int student_ID;
    long long score,quality_score,comprehensive_score;
} stu;

int main(){
    int n;
    cin>>n;
    while(n--){
        cin>>stu.student_ID>>stu.score>>stu.quality_score;
        stu.comprehensive_score=stu.score*7+stu.quality_score*3;
        if(stu.score+stu.quality_score>140&&stu.comprehensive_score>=800)cout<<"Excellent"<<endl;
        else cout<<"Not excellent"<<endl;
    }
}