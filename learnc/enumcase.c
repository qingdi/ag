//
// Created by qingdi on 2019-03-16.
//
#include <stdio.h>
void main(){
    //定义枚举类型
    enum DAY{
        MON=1,TUE, WED, THU, FRI, SAT, SUN
    };
    //
    enum DAY day;
    //定义枚举类型的同时定义枚举变量
    enum DAY2{
        MON2=1, TUE2, WED2
    }day2;

    //省略枚举名称
    enum{
        MON3=1, TUE3
    }day3;
    day3 = TUE3;
    printf("%d", day3);
}