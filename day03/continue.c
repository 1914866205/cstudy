#include <stdio.h>
int main()
{
    int ch;
    while ((ch = getchar()) != '\n')
    { // getchar() 输入字符
        if (ch == 'T')
        {
            continue;
        }
        if (ch == 'A')
        {
            break;
        }

        putchar(ch);
    }
    putchar('\n'); // putchar('\n')输出字符\n

    int i;
    for (i = 0; i < 100; i++)
    {
        if (i % 2)
        {
            continue; //不会死循环，因为continue后i++会执行
        }
    }
    i = 0;
    while (i < 100)
    {
        if (i % 2)
        {
            continue;   //会死循环，因为continue后i++不执行
        }
        i++;
    }
    return 0;
}