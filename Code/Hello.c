#include<stdio.h>
#include <stdbool.h>
union Utest
{
    short num;
    char c;
}Utest;
int main(void)
{
    // printf("%d\n",sizeof(1==1));
    short i = 0x1122;
    char* a = (char *)(&i);
    printf("%p\n",a);//低地址
    printf("%x\n",*a);//22,低位

    printf("%p\n",(a+1));//高地址
    printf("%x\n",*(a+1));//11，高位
    //说明是小端
    union Utest u;
    u.num = 0x5566;
    printf("%x\n",u.c);//66,66是低位，读取内存时，是从低地址到高地址
    //低地址中存储的是地位，因此是小端
    int j = 888;
    if(i != 1){
        int j = 999;
        printf("%d\n",j);
    }
    return 0;
}