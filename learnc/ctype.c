//
// Created by houziqiang on 2019-03-15.
//

#include <stdio.h>
#include <limits.h>
#include <float.h>
#include "ctype.h"

#define LEN 10
#define WIDTH 5
#define NEWLINE '\n'

//指定类型常量
const int LENGTH = 10;

//static存储类
static int count = 10;/* 全局变量 - static 是默认的 是变量的作用域限制在申明它的文件中 */


int main(){
    printf("int 存储大小 : %lu \n", sizeof(int));
    printf("float 最大字节数: %d \n", sizeof(float));
    printf("float 最大值: %E \n", FLT_MAX);
    printf("float 最小值: %E \n", FLT_MIN);
    printf("精度值: %d \n", FLT_DIG);
    //变量定义
    extern int d, f;//声明
    int e = 3, g = 5;//定义并初始化 已经建立存储空间
    char x = 'x';
    //常量使用
    int area;
    area = LEN * WIDTH;
    printf("value of area : %d", area);
    printf("%c", NEWLINE);

    //存储类 定义变量函数的范围[可见性]和生命周期。
    int mount;
    auto int month;//auto默认的存储类，只能用在函数内部
    register int miles;//定义存储在寄存器上的局部变量
    addtwonum();
    addtwonum();
    addtwonum();
    addtwonum();
    addtwonum();
    addtwonum();
}

int x;
int y;
int addtwonum(){
    static int thingy = 5;//局部static变量，表示程序的生命周期内保持变量的存在，而不需要每次进入函数和离开函数是销毁
    extern int x;
    extern int y;
    x = 1;
    y = 2;
    printf("%d\n", thingy);
    thingy++;
    return x + y;
}