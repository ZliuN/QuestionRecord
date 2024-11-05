#include <stdio.h>
int main(){
    int N,age18=0,age35=0,age60=0,age61=0;
    scanf("%d", &N);
    int age[N];
    for(int i=0;i<N;i++){
        scanf("%d", &age[i]);
    }
    for(int i=0;i<N;i++){
        if(age[i]<=18){
            age18++;
        }if(age[i]>=19&&age[i]<=35){
            age35++;
        }if(age[i]>=36&&age[i]<=60){
            age60++;
        }if(age[i]>=61){
            age61++;
        }
    }
    printf("%.2lf%%\n%.2lf%%\n%.2lf%%\n%.2lf%%", (double)age18/N*100, (double)age35/N*100, (double)age60/N*100, (double)age61/N*100);
}