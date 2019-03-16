#include <stdio.h>
int main(){
    int a = 10;
    do{
        printf("%d\n", a);
        a = a + 1;
    }while (a < 20);
    for( int a = 10; a < 20; a = a + 1 )
    {
        printf("a 的值： %d\n", a);
    }
    a = 1;
    while( a < 20 )
    {
        printf("a 的值： %d\n", a);
        a++;
    }
    return 0;
}