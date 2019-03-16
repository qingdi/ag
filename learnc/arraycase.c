//
// Created by qingdi on 2019-03-16.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

double getAverage(int arr[], int size){
    int i;
    double avg;
    double sum;

    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    avg = sum / size;
    return avg;
}
// c 不允许返回一个完整的数组
// 必须声明一个返回指针的函数
// c不支持在函数外返回局部变量的地址，除非定义局部变量为static变量
int * getRandom(){
    static int r[10];
    int i;
    //设置种子
    srand((unsigned)time(NULL));
    for (int i = 0; i < 10; ++i) {
        r[i] = rand();
        printf("r[%d] = %d\n", i, r[i]);
    }
    return r;
}

int main(){
    int n[10];
    int i, j;

    for(i = 0; i < 10; i++){
        n[i] = i + 100;
    }

    for (int j = 0; j < 10; j++) {
        printf("Element[%d] = %d\n", j, n[j]);
    }
    //多维数组
    int x[2][4] = {
            {
                0, 1, 2, 3
            },
            {
                4, 5, 6, 7
            }
    };
    for ( i = 0; i < 2; i++ )
    {
        for ( j = 0; j < 4; j++ )
        {
            printf("a[%d][%d] = %d\n", i,j, x[i][j] );
        }
    }
    //函数的调用
    int balance[5] = {1000, 2, 3, 44, 78};
    double avg;
    avg = getAverage(balance, 5);
    printf("%f\n", avg);

    //执行整数的指针
    int *p;
    int f;
    p = getRandom();
    for (i = 0; i < 10; i++){
        printf("*(p + %d) : %d\n", i, *(p + i));
    }

    return 0;
}

