#include <stdio.h>
#include <stdlib.h>


struct campus_card {
    unsigned long card_number;  //卡号
    float balance;  //余额
    int card_type;  // 卡类型(如教师卡、学生卡、水卡等)
};

struct teacher_info {
    unsigned long id; //教工号  4
    char name[20]; //姓名
    int age; //年龄
    int gender; //性别
    unsigned long long tel; //手机号
    char address[100]; //家庭住址
    float salary; //工资
    int ratings[3]; //近3年教学质量评分
    struct campus_card card;  //校园卡
};

typedef struct teacher_info Teacher;


int main() {
    //这个程序准备将2名教师的信息保存到文件里，实现信息长久存储
    Teacher teachers[2] = {
            {
                    .id = 952007011,
                    .name = "张三",
                    .age = 40,
                    .gender = 1,
                    .tel = 13812345678,
                    .address = "南昌市东湖区XXXX路XXXX号",
                    .salary = 12000.50,
                    .ratings = {5, 4, 5},
                    .card = {101012345, 150.75, 0}
            },
            {
                    .id = 952016014,
                    .name = "李四",
                    .age = 35,
                    .gender = 1,
                    .tel = 13987654321,
                    .address = "南昌市青山湖区XXXX路XXXX号",
                    .salary = 11000.30,
                    .ratings = {4, 3, 3},
                    .card = {101074110, 200.50, 0}
            }
    };


    //将2名教师的信息保存在teacher_info.dat文件中(相对路径)
    FILE *file = fopen("teacher_info.dat", "w");
    if (file == NULL) {
        printf("文件打开失败！");
        return -1;
    } else {
       /* 下面两种方法的效果是一样的:
        方法1：写2个数据块，数据块大小是一个Teacher结构体
        fwrite(teachers,sizeof(Teacher),2,file);

        方法2：写1个数据块，数据块大小是一个teachers数组的大小
        fwrite(teachers,sizeof(teachers),1,file);
        */

        //采用方法2写入
        fwrite(teachers, sizeof(teachers), 1, file);

        // ferror()函数用于检测文件操作是否出现错误
        if (ferror(file)) {
            //perror()函数用于打印具体错误原因
            perror("文件写入错误");
        }

        //关闭文件
        fclose(file);
    }


}





