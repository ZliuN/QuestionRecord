#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <windows.h>

int main(void) {
    //实现一个简易的点名程序
    int randomNumber; //定义一个随机数变量用于存放随机生成的学号
    int status = 1; //定义一个描述程序状态的变量（1：滚动打印状态  0：暂停状态）
    srand(time(NULL));  //设置随机数种子
    system("chcp 65001");  //将windows控制台的编码设置为UTF-8,防止出现乱码

    //使用while(1)循环，确保程序一直执行直到碰到break结束
    while (1) {
        if (status) {
            system("cls");  //清屏
            //假设全班40人,起始学号33号
            randomNumber = rand() % 41 + 33;

            //控制输出位置大概在屏幕中间
            printf("\n\n\n\n\n\n\n\n\n\n\n");
            printf("\t\t\t\t");
            printf("^_^下一个幸运儿是: %d 号", randomNumber);

            //让程序休眠一会儿,这一行代码不是必须的
            Sleep(20);
        }

        //检测键盘按键状态 键盘有键按下_kbhit()函数返回:1 否则返回:0
        if (_kbhit()) {
            char ch = _getch();  // _getch()函数可以获取用户具体的按键值
            if (ch == ' ') {
                status = !status;  //用户按下空格键，程序状态切换
            }
            // ESC键转义字符-->'\e'
            if (ch == '\e') {
                break;  //用户按下ESC键，程序结束
            }
        }
    }


}
