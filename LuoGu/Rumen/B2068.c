#include <stdio.h>

int pick_units(int x){
    return x % 10;
}
int pick_tens(int x){
    int y = x / 10;
    return y % 10;
}
int pick_hundreds(int x){
    int y = x / 100;
    return y % 10;
}
int pick_thousands(int x){
    return x / 1000;
}

int main(){
    int n;
    scanf("%d", &n);
    int arr[n], result, number = 0;
    for (int i = 0; i < n;i++){
        scanf("%d", &arr[i]);
        result = pick_units(arr[i]) - pick_thousands(arr[i]) - pick_hundreds(arr[i]) - pick_tens(arr[i]);
        if (result > 0){
            number = number + 1;
        }
    }
    printf("%d", number);
}