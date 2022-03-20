#include<stdio.h>
#define NUM 3
int main()
{
    int s[NUM];
    // int i, sum = 0;
    // for (i = 0; i < NUM; i++) {
    //     printf("请输入第%i位同学的成绩：", i + 1);
    //     scanf("%d", &s[i]);
    //     sum += s[i];
    // }
    // printf("成绩录入完毕，这次考试的平均分是:%.2f\n", (double)sum / NUM);
    int b[10];//b未初始化

    for (int i = 0; i < 10; i++) {
    printf("%d\n", b[i]); //b未赋值，得到的是内存中随机的数据
    }
    int c[10] = {0};//c的第一个元素被赋值为0，其余元素自动赋值为0
    printf("%d\n", c[0]);
    int d[10] = {1, 2, 3}; // d的前三个元素被赋值，其余元素自动赋值为0
    printf("%d\n", d[1]);
    int e[] = { 1, 2, 3 };
    int f[] = {[1]=2};
    printf("%d\n", f[1]);
    printf("%d\n", sizeof(f)); //会计算数组元素的大小  8  此处默认创建的 f为两个元素   所以是8字节，每个元素占用4个字节
    printf("f的元素个数%d\n", sizeof(f)/4);
    //C99标准中可以数组越界（不会报错，会生效但没用）和动态增加数组
    printf("e的元素个数%d\n", sizeof(e)/4);
    e[3] = 4;
    printf("e的元素第4个元素数是%d\n", e[3]); //打印e的第四个元素
    printf("e的元素个数%d\n", sizeof(e)/4) ;  //没用第四个元素

    return 0;
}