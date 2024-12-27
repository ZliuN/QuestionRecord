#include <iostream>
using namespace std;
int main(){
    int n=0,arr[20][20];
    cin>>n;
    int left=0,right=n-1,up=0,down=n-1;
    int i=0,j=0,val=1;
    while(val<=n*n){
        for(i=left;i<=right;i++)
            arr[up][i]=val++;
        up++;
        for(i=up;i<=down;i++)
            arr[i][right]=val++;
        right--;
        for(i=right;i>=left;i--)
            arr[down][i]=val++;
        down--;
        for(i=down;i>=up;i--)
            arr[i][left]=val++;
        left++;
    }
    for(i=0;i<n;i++){
        for(j =0;j<n;j++)
            printf("%d ",arr[i][j]);
        printf("\n");
    }
    return 0;
}