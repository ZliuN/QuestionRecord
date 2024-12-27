#include <bits/stdc++.h>
using namespace std;
int main(){
    int w,x,h,q,count=0;
    cin>>w>>x>>h;
    cin>>q;
    int block[25][25][25] = {0};
    int t_x1,t_y1,t_z1,t_x2,t_y2,t_z2;
    for(int i=0;i<q;i++){
        scanf("%d %d %d %d %d %d",&t_x1,&t_y1,&t_z1,&t_x2,&t_y2,&t_z2);
        for(int k=t_x1;k<=t_x2;k++){
            for(int j=t_y1;j<=t_y2;j++){
                for(int n=t_z1;n<=t_z2;n++){
                    block[k][j][n]=1;
                }
            }
        }
    }
    for(int k=1;k<=w;k++){
        for(int j=1;j<=x;j++){
            for(int n=1;n<=h;n++){
                if(block[k][j][n]==0){
                    count++;
                }
            }
        }
    }
    cout<<count;
}