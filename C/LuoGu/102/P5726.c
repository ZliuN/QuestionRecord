#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int max=0,min=10,arr[n],sum=0;;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(max<arr[i]){
            max=arr[i];
        }
        if(min>arr[i]){
            min=arr[i];
        }
    sum+=arr[i];
    }
    double average;
    average = (double)(sum-min-max)/(n-2);
    printf("%.2lf",average);
}