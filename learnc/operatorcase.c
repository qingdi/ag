#include <stdio.h>

int main(void){
    int b;
    int a = 10;
    b = a++;

    printf("%d\n", b);
    printf("%d\n", a);

    if( a == b ){
        printf("ok\n");
    }
    if ( a && b ){
        printf("ok2\n");
    }
    unsigned int c = 60;
    unsigned int d = 13;
    int e = 0;
    e = c & d;
    printf("%d\n", e);
    e = c | d;
    printf("%d\n", e);
    e = c ^ d;
    printf("%d\n", e);
    e = ~d;
    printf("%d\n", e);
    e = a << 2;
    printf("%d\n", e);
    e = a >> 2;
    printf("%d\n", e);

    //其他运算符
    int f = 4;
    short g;
    double h;
    int* ptr;
    printf("%lu\n", sizeof(f));
    printf("%lu\n", sizeof(g));
    printf("%lu\n", sizeof(h));
    ptr = &f;
    printf("%d\n", f);
    printf("%d\n", *ptr);

    f = 10;
    b = (a == 1) ? 20 : 30;
    printf("%d\n", b);
    return 0;
}