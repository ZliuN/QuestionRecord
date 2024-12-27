#include <bits/stdc++.h>
using namespace std;
double distance(double x1,double x2,double y1,double y2){
    double x=x1-x2;
    double y=y1-y2;
    double d = sqrt(pow(x,2)+pow(y,2));
    return d;
}
int main(){
    double x1,x2,x3,y1,y2,y3;
    double s=0;
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    s=distance(x1,x2,y1,y2)+distance(x2,x3,y2,y3)+distance(x3,x1,y3,y1);
    printf("%.2lf",s);
}