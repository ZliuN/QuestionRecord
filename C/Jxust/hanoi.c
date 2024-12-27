#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int step = 0;
void hanoi(int level,char source ,char support,char destination){

    if(level == 1){
        printf("第%d步:把碟子从%c号柱子搬到%c号柱子\n",++step,source,destination);
    }
    else{
        hanoi(level-1,source,destination,support);
        printf("第%d步:把碟子从%c号柱子搬到%c号柱子\n",++step,source,destination);
        hanoi(level-1,support,source,destination);
    }
}

int main(void) {
    hanoi(5,'1','2','3');
}