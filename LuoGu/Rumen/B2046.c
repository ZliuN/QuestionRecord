#include <stdio.h>

int main(){
    int s = 0;
    double bike, walk;
    scanf("%d", &s);
    bike = 50 + ( s / 3.0);
    walk = s / 1.2;
    if( walk > bike){
        printf("Bike");
    }
    if( bike > walk){
        printf("Walk");
    }
    if( bike == walk){
        printf("All");
    }
}