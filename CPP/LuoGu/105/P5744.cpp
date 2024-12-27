#include <bits/stdc++.h>
using namespace std;
struct Student{
    string name;
    int age;
    double score;
}Student[8];

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>Student[i].name>>Student[i].age>>Student[i].score;
        Student[i].age++;
        Student[i].score*=1.2;
        if(Student[i].score>600)Student[i].score=600;
    }
    for(int i=0;i<n;i++){
        cout<<Student[i].name<<" "<<Student[i].age<<" "<<Student[i].score<<endl;
    }
}