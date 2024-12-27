#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

#define RED "\x1b[31m"
#define GREEN "\x1b[32m"
#define YELLOW "\x1b[33m"
#define BLUE "\x1b[34m"
#define RESET "\x1b[0m"

/*
 * 定义一个二维数组用于存放闰年或非闰年，每个月份中包含的天数
 * 非闰年使用：daysInMonth[0] 闰年使用:daysInMonth[1]
 * 数组中的第一个元素赋值0，是为了能直接使用month作为数组下标来访问特定月份中包含的天数
 * 例如：daysInMonth[0][5]表示一个非闰年的5月有多少天
 * 同理，daysInMonth[1][3]表示一个闰年的3月有多少天
 */
int daysInMonth[2][13] = {{0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
                          {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}};

//此函数根据给定的年月信息打印日历头
void printHeader(int year, int month) {
    printf("%s", GREEN);
    printf("         %d年%d月\n", year, month);
    printf("Mo  Tu  We  Th  Fr  Sa  Su\n");
    printf("%s", RESET);
}

//计算任意年份是否是闰年 是：返回 1，否：返回 0
int isLeapYear(int year) {
    return ((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0);
}

/*
 * 计算某个任意年份的1月1日是星期几，这里选择1970-1-1(星期四)作为基准日
 * 星期一：返回 1  星期二：返回 2 依此类推
 * 注意->星期日：返回 0
 */
int getFirstDayOfYear(int year) {
    //sumDays用于统计从1970-1-1到 year-1-1过了多少天 (year>=1970)
    //或者用于统计从year-1-1到1970-1-1过了多少天 (year<1970)
    int sumDays = 0;   //一定别忘了要赋初值

    if (year >= 1970) {
        //年份year在1970年之后
        for (int i = 1970; i < year; i++) {
            sumDays += (isLeapYear(i) ? 366 : 365);
        }
        return (4 + sumDays) % 7;
    } else {
        //年份year在1970年之前
        for (int i = year; i < 1970; i++) {
            sumDays += (isLeapYear(i) ? 366 : 365);
        }
        return (4 - sumDays % 7 + 7) % 7;
    }
}

// 计算某个任意年份任意月份的1日是星期几
int getFirstDayOfMonth(int year, int month) {
    //1.先拿到这个给定年份的1月1日是星期几
    int firstDayOfYear = getFirstDayOfYear(year);
    /*2.再用sumDays统计从这个给定年份的1月1日到给定month的1日过了多少天
     * 从1月到month月，过了几个月就把这些月份中的天数全部累加起来
     */
    int sumDays = 0;  //一定别忘了要赋初值
    for (int i = 1; i < month; i++) {
        sumDays += daysInMonth[isLeapYear(year)][i];
        /*isLeapYear(year)的返回值要么是0，要么是1
         * 刚好对应上二维数组中的两个元素daysInMonth[0],daysInMonth[1]
         * 之前定义的二维数组daysInMonth在这里起到了关键性的作用
         * 利用daysInMonth这个二维数组可以极大的简化for循环体中的代码
         */
    }
    return (firstDayOfYear + sumDays) % 7;
}

//打印功能键提示
void printTips() {
    printf("%s", YELLOW);
    printf("\n\n功能键提示：");
    printf("u:上一月 d:下一月 p:前一天 n:后一天 c:日期高亮 r:日期重置\n");
    printf("%s", RESET);
}

int main() {

    setbuf(stdout, NULL);
    system("chcp 65001");

    int year = 1970;
    int month = 1;
    int day = 1;
    int state = 1; //指定日期是否高亮显示


    //******************根据时间戳计算系统当前日期**********************

    int daysSince1970 = time(NULL) / 86400;   //一天86400秒

    // 计算当前年份
    while (daysSince1970 > (isLeapYear(year) ? 366 : 365)) {
        daysSince1970 -= (isLeapYear(year) ? 366 : 365);
        year++;
    }
    // 计算当前月份
    while (daysSince1970 >= daysInMonth[isLeapYear(year)][month]) {
        daysSince1970 -= daysInMonth[isLeapYear(year)][month];
        month++;
    }
    // 计算当前日期
    day += daysSince1970;

    goto start; //跳过用户输入直接显示系统当前日期

    //******************************************************


    //******************接受用户指定的年、月、日*****************
    input:
    printf("请输入你想查看的日期,例如：2024-11-15\n");
    printf("请输入：");
    scanf("%d-%d-%d", &year, &month, &day);
    //******************************************************


    start:
    while (1) {
        //0.清屏
        system("cls");

        //1.打印日历头
        printHeader(year, month);

        //2.计算给定年月的1日是星期几，并打印缩进()
        int firstDay = getFirstDayOfMonth(year, month);
        if (firstDay == 0) {
            firstDay = 7;
        }
        for (int i = 1; i < firstDay; i++) {
            printf("    ");
        }

        //3.从这个月的1日一直打印到这个月的最后一天，注意：碰到星期日要换行
        for (int i = 1; i <= daysInMonth[isLeapYear(year)][month]; i++) {
            if (i == day && state) {
                printf("%s%2d%s  ", RED, i, RESET);
            } else {
                printf("%2d  ", i);
            }
            if (firstDay % 7 == 0) {
                printf("\n");
            }
            firstDay = (firstDay + 1) % 7; //firstDay用于记录 “i”号是星期几
        }

        //4.打印功能按键提示
        printTips();

        //5.根据用户按键来实现特定功能
        while (1) {
            //检测键盘输入
            if (_kbhit()) {
                char ch = _getch();  // _getch()函数可以获取用户具体的按键值

                //按u键：上一个月(Up)
                if (ch == 'u') {
                    if (month == 1) {
                        month = 12;
                        year--;
                    } else {
                        month--;
                    }
                    break;
                }

                //按d键：下一个月(Down)
                if (ch == 'd') {
                    if (month == 12) {
                        month = 1;
                        year++;
                    } else {
                        month++;
                    }
                    break;
                }

                //按p键：前一天(Previous)
                if (ch == 'p') {
                    if (month == 1 && day == 1) {
                        month = 12;
                        year--;
                        day = daysInMonth[isLeapYear(year)][12];
                    } else if (day == 1) {
                        month--;
                        day = daysInMonth[isLeapYear(year)][month];
                    } else {
                        day--;
                    }
                    break;
                }

                //按n键：后一天(Next)
                if (ch == 'n') {
                    if (month == 12 && day == 31) {
                        month = 1;
                        day = 1;
                        year++;
                    } else if (day == daysInMonth[isLeapYear(year)][month]) {
                        month++;
                        day = 1;
                    } else {
                        day++;
                    }
                    break;
                }

                //按c键：改变日期的高亮状态(Color)
                if (ch == 'c') {
                    state = !state;
                    break;
                }
                //按r键：重置日期，接受用户输入新的日期(Reset)
                if (ch == 'r') {
                    state = 1;
                    system("cls");
                    goto input;
                }

                //按下ESC键，程序结束
                if (ch == '\e') {
                    return 0;
                }
            }
        }

        Sleep(10); //每10毫秒检测一次键盘状态，减少对CPU资源的占用
    }
}




