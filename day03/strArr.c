#include<stdio.h>
int main()
{
    //初始化字符数组的每个元素
    char str1[2] = {'h', 'q'};
    //可以不写元素的个数，因为编译器会自动计算
    char str2[] = {'h', 'q','\0'};
    //使用字符串常量初始化字符数组
    char str3[] = {"hq"};
    //使用字符串常量初始化，可以省略大括号
    char str4[] = "hq";
    return 0;
}