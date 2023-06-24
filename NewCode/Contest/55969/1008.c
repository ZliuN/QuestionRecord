#include <stdio.h>

int isPunish(int chinese, int math, int english);

int main() {
    int n, chinese, math, english, count=0;
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        scanf("%d %d %d", &chinese, &math, &english);
        if(isPunish(chinese, math, english)==1) {
            count++;
        }
    }
    printf("%d", count);
}

int isPunish(int chinese, int math, int english) {
    int average = (chinese+math+english)/3;
    if(average < 60) {
        return 1;
    }else {
        return 0;
    }
}