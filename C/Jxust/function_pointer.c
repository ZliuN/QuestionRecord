#include <stdio.h>
#include <stdlib.h>

void introduce_ch() {
    printf("大家好，我叫张三，我来自北京！\n");
}

void introduce_en() {
    printf("Hello everyone, my name is ZhangSan,and I'm from Beijing!\n");
}

void introduce_jp() {
    printf("皆さん、こんにちは、私は張三と申します、私は北京から来ました！\n");
}

void introduce_kr() {
    printf("안녕하세요, 저는 장삼이라고 합니다. 저는 북경에서 왔습니다!\n");
}

//返回类型是“函数指针”的函数
//定义语法： return_type (*function_name(parameter_list))(parameter_types);
void (*introduce(int language))(){
    void (*fun_ptr)();  //定义函数指针
    switch (language) {
        case 0:
            fun_ptr = introduce_en;
            break;
        case 1:
            fun_ptr = introduce_jp;
            break;
        case 2:
            fun_ptr = introduce_kr;
            break;
        default:
            fun_ptr = introduce_ch;
    }
    return fun_ptr;
}

int main() {
    setbuf(stdout, NULL);

    int language = 0;
    printf("请输入语言:");
    scanf("%d", &language);

    introduce(language)();

}



