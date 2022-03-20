#include<stdio.h>
int main()
{
    int i = 5;
// dead:
    while (i++){
        if (i>10)
        {
            goto label;  //可以跳到label标签位置
        }
        
    }
label:    printf("here,i=%d\n", i);
    // goto dead;
    return 0;
}