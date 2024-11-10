#include <stdio.h>
int main(){
    int arr[3],item;
    for(int i=0;i<3;i++){
        scanf("%d",&arr[i]);
        for(int k=0;k<i;k++){
            if(arr[i]<arr[k]){
                item=arr[i];
                arr[i]=arr[k];
                arr[k]=item;
            }
        }
    }
    if(arr[0]+arr[1]<=arr[2]){
        printf("Not triangle\n");
    }if(arr[0]+arr[1]>arr[2]&&arr[0]*arr[0]+arr[1]*arr[1]==arr[2]*arr[2]){
        printf("Right triangle\n");
    }if(arr[0]+arr[1]>arr[2]&&arr[0]*arr[0]+arr[1]*arr[1]>arr[2]*arr[2]){
        printf("Acute triangle\n");
    }if(arr[0]+arr[1]>arr[2]&&arr[0]*arr[0]+arr[1]*arr[1]<arr[2]*arr[2]){
        printf("Obtuse triangle\n");
    }if(arr[0]+arr[1]>arr[2]&&arr[0]==arr[1]||arr[1]==arr[2]||arr[0]==arr[2]){
        printf("Isosceles triangle\n");
    }if(arr[0]==arr[1]&&arr[1]==arr[2]){
        printf("Equilateral triangle\n");
    }
}