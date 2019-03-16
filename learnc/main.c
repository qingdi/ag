#include <stdio.h>

int count;
//提供一个全局变量的引用，全局变量对所有程序文件可见
extern void write_extern();

int main(){
    count = 5;
    write_extern();
}