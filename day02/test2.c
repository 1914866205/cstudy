#include<stdio.h>
void main()
{
    int sum;
    for ( int i = 1; i <= 100;i++)
    {
        sum += i;
    }
    printf("%d\n", sum);

    int count = 0;
    printf("请输入一行英文字符");
    while (getchar()!='\n'){
        count++;
    }
    printf("你总共输入了%d个字符\n",count);
}