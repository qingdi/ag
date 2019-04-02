//
// Created by qingdi on 2019-03-16.
//
#include <stdio.h>
const int MAX = 3;
int main(){
    int var1;
    char var2[10];
    printf("%p\n", &var1);
    printf("%p\n", &var2);

    //指针定义
    int *ip;
    double *dp;

    int var3 = 20;
    ip = &var3;
    printf("%p\n", ip);
    //指针访问
    printf("%d\n", *ip);

    //定义空指针
    int *ptr = NULL;
    printf("%p\n", ptr);

    int var4[] = {10, 100, 200};
    int i, *ptr5, *ptr6;
    /*指针中的数组地址*/
    ptr5 = var4;
    ptr6 = &var4[2];
    for(i = 0; i < MAX; i++){
        printf("var4[%d] = %x\n", i, ptr5);
        printf("var4[%d] = %d\n", i, *ptr5);
        ptr5++;
    }
    //定义指针数组
    int *a[10];

    int var7;
    int *ptr7;
    int **pptr7;
    var7 = 3000;
    ptr7 = &var7;
    pptr7 = &ptr7;


}

