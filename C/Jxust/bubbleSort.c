#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(void) {
    setbuf(stdout, NULL);
    int scores[10] = {93, 87, 100, 75, 68, 70, 82, 79, 96, 88};
    int temp;
    int step = 0;
    int bigIndex = 0;  //记录每次交换时，较大的那个数的索引位置
    int finishedIndex = 10; //记录已经排好序的元素的索引位置

    //冒泡排序
    for (int i = 0; i < 10 - 1; i++) {
        //接下来，我给大家冒个泡
        for (int j = 0; j < 10 - 1 - i; j++) {
            if (scores[j] > scores[j + 1]) {
                //交换两个相邻元素
                temp = scores[j];
                scores[j] = scores[j + 1];
                scores[j + 1] = temp;
            }
            //记录每次交换后(不产生交换也是一样)，较大的值的下标(索引)
            bigIndex = j + 1;
            //再次遍历数组，看看现在数组元素的布局
            printf("第%d步:", ++step);
            for (int k = 0; k < 10; k++) {
                if (k == bigIndex) {
                    //打红色
                    printf("\x1b[31m%d\x1b[0m,", scores[k]);
                } else if (k >= finishedIndex) {
                    //打蓝色
                    printf("\x1b[34m%d\x1b[0m,", scores[k]);
                } else {
                    printf("%d,", scores[k]);
                }
            }
            printf("\n");
            Sleep(300);
        }
        finishedIndex--;
    }

    printf("\n排序后的结果如下：\n");
    // 打印排序后的数组布局
    for (int i = 0; i < 10; i++) {
        printf("%d,", scores[i]);
    }

    return 0;
}
