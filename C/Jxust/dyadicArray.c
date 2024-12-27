#include <stdio.h>

int main() {
    //定义一个二维数组来存放5名同学3门课程(大学英语、高等数学、C语言)的考试成绩，并对数组数据进行初始化：
    int scores[5][3] = {
            {93, 85, 78},  // 第一位同学的成绩
            {76, 88, 90},  // 第二位同学的成绩
            {84, 92, 81},  // 第三位同学的成绩
            {67, 79, 74},  // 第四位同学的成绩
            {89, 95, 87}   // 第五位同学的成绩
    };
    char course_name[3][13] = {"大学英语", "高等数学", "C语言"};  //一个中文字符采用UTF-8编码需要占3个字节内存



    //编程要求1：打印每名同学每门课程的成绩及该名同学的平均成绩。
    printf("************************\x1b[31m任务1\x1b[0m***************************\n");
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum = scores[i][0] + scores[i][1] + scores[i][2];  //sum记录某一名同学的3门课程总分
        printf("同学%d-> ", i + 1);
        printf("%s%d ", course_name[0], scores[i][0]); //第一门课
        printf("%s%d ", course_name[1], scores[i][1]); //第一门课
        printf("%s%d ", course_name[2], scores[i][2]); //第一门课
        printf("(平均分%.1f)", sum / 3.0);
        printf("\n"); //每打印一名学生成绩信息换一行
    }
    printf("********************************************************\n\n");



    //编程要求2：打印每门课程的最高分、最低分和平均分。
    printf("************************\x1b[31m任务2\x1b[0m***************************\n");
    int course_max[3] = {0, 0, 0};  //记录三门课程的最高分,为任务3中的需求做准备

    for (int j = 0; j < 3; j++) {
        int max = scores[0][j];   //每门课都先取第一个学生的成绩作为初始的最高分
        int min = scores[0][j];  //每门课都先取第一个学生的成绩作为初始的最低分
        int sum = 0;    //sum记录某一门课程5名同学的总分
        for (int i = 0; i < 5; i++) {
            if (scores[i][j] > max) {
                max = scores[i][j];
            } else if (scores[i][j] < min) {
                min = scores[i][j];
            }
            sum += scores[i][j];
        }
        course_max[j] = max;

        printf("%s->最高分%d,最低分%d,平均分%.1f\n", course_name[j], max, min, sum / 5.0);
    }
    printf("********************************************************\n\n");



    //编程要求3：按每名同学总成绩从高到低排序后打印总成绩及成绩明细。
    printf("************************\x1b[31m任务3\x1b[0m***************************\n");
    //定义一个二维数组scores_sum用于存放5名学生的总成绩，以及该总成绩在原始scores数组中索引的位置
    int scores_sum[2][5] = {{0, 0, 0, 0, 0},
                            {0, 1, 2, 3, 4}};

    //遍历原始scores数组，计算每名同学的总成绩并填充scores_sum中的scores_sum[0]
    for (int i = 0; i < 5; i++) {
        scores_sum[0][i] = scores[i][0] + scores[i][1] + scores[i][2];
    }

    //对scores_sum数组按总分从高到低排序
    int temp;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5 - 1 - i; j++) {
            if (scores_sum[0][j] < scores_sum[0][j + 1]) {
                //交换总分
                temp = scores_sum[0][j];
                scores_sum[0][j] = scores_sum[0][j + 1];
                scores_sum[0][j + 1] = temp;

                //交换索引(排序索引也要跟着交换)
                temp = scores_sum[1][j];
                scores_sum[1][j] = scores_sum[1][j + 1];
                scores_sum[1][j + 1] = temp;
            }
        }
    }

    //打印经过排名后的成绩记录
    for (int i = 0; i < 5; i++) {
        printf("排名第%d-> ", i + 1);
        printf("总分:%d", scores_sum[0][i]);
        printf("(");
        for (int j = 0; j < 3; j++) {
            if (scores[scores_sum[1][i]][j] == course_max[j]) {
                //课程最高分标记为红色
                printf("%s\x1b[31m%d\x1b[0m ", course_name[j], scores[scores_sum[1][i]][j]);
            } else {
                printf("%s%d ", course_name[j], scores[scores_sum[1][i]][j]);
            }

        }
        printf(")\n");

    }
    printf("********************************************************\n\n");
}



