#include <stdio.h>
int main(){
    int arr[3];
    int item;
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
    for(int i=0;i<3;i++){
        printf("%d ",arr[i]);
    }
}