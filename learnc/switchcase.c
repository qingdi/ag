//switch express必须为常量表达式 必须是整型或枚举类型

#include <stdio.h>

int main(){
    char grade = 'B';

    switch(grade){
        case 'A':
            printf("good\n");
            break;
        case 'B':
            printf("so so \n");
            break;
        default:
            printf("what are you noshalei");
    }
    return 0;
}