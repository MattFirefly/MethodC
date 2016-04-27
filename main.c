#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "hello.h"

void myprint() {
    printf("Hello World myprint\n");
}

void myprintname(char *name) {
    printf("Hello World myprint %s\n", name);
}

int sum(int n, ...) {//可变参数方法
    int all = 0;
    int i;
    va_list args;   //获取参数列表
    va_start(args, n);  //开始获取 ，获取谁，数量
    for (i = 0; i < n; ++i) {
        all += va_arg(args, int);//获取谁，得到的类型
    }
    va_end(args);
    return all;
}

int main(int argc, char **argv) {
    myprint();
    myprintname("demo");

    printf("mian argc:%d\n", argc);
    printf("mian argv:%s\n", argv[0]);

    printf("sum:%d\n", sum(3,1,6,2,6,2));//第一个参数是数量！


    savHello("first demo");//需要配置cmake添加文件编译
    return EXIT_SUCCESS;
}

