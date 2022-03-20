#include<stdio.h>
int main()
{
    int i, num;
    _Bool flag = 1;
    printf("请输入一个整 数:");
    scanf("%d", &num);
    for (i = 2; i < num/2; i++) {
        if (num%i==0)
        {
            flag = 0;
        }
        
    }
    if (flag)
    {
    printf("%d是一个素数",num);
    }else{
    printf("%d不是一个素数",num);
    }
    
}