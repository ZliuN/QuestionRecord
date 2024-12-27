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
    //这个程序准备将保存在teacher_info.data文件中的教师信息读取出来
    //先动态申请用于存放2名教师信息的内存空间
    Teacher *p = (Teacher *) malloc(sizeof(Teacher) * 2);

    FILE *file = fopen("teacher_info.dat", "r");

    if (file == NULL) {
        printf("文件打开失败！");
        return -1;
    } else {

        //从文件读取2个数据块，每个数据块是一个Teacher结构体类型大小，并将读取的数据存放在p所指向的那块空间
        fread(p, sizeof(Teacher), 2, file);

        //在程序中打印读取到的教师信息
        printf("第一名老师的工号:%lu\n",p->id);
        printf("第一名老师的姓名:%s\n",p->name);
        printf("第一名老师的工资:%.1f\n",p->salary);
        printf("--------------------------------------\n");
        printf("第二名老师的工号:%lu\n",(p+1)->id);
        printf("第二名老师的姓名:%s\n",(p+1)->name);
        printf("第二名老师的家庭住址:%s\n",(p+1)->address);
        printf("第二名老师的校园卡余额:%.1f\n",(p+1)->card.balance);



        if (ferror(file)) {
            //perror()函数用于打印具体错误原因
            perror("文件写入错误");
        }

        //关闭文件
        fclose(file);
    }


}





