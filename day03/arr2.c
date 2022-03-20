#include <stdio.h>
#include <string.h>
int main()
{
    int a[2][2] = {1, 2, 3, 4};
    int b[2][2] = {
        {1, 2},
        {3, 4}};
    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d", a[i][j]);
        }
        printf("\n");
    }
    int c[3][3] = {{1}, {0}, {9}};
    /** 只给每行第一个赋值
       100
       000
       900
     */
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d", c[i][j]);
        }
        printf("\n");
    }
    int d[3][4] = {[0][0] = 1, [1][1] = 2, [2][2] = 3};
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%d", d[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    //无论多少维数组，只有第一维可以不写，其他维度必须写上
    // int e[3][4] ={....}  可以
    // int e[3][] ={....}  不可以
    // int e[][4] ={....}   可以
    // int e[][] ={....}   不可以
        int e[3][4] = {1,
                       2,
                       3,
                       4,
                       5,
                       6,
                       7,
                       8,
                       9,
                       10,
                       11,
                       12};
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%d", e[i][j]);
        }
        printf("\n");
    }
    int g[][4] = {1,
                   2,
                   3,
                   4,
                   5,
                   6,
                   7,
                   8,
                   9,
                   10,
                   11,
                   12};
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%d  ", g[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    int m[3][3] = {
        {1, 1, 1},
        {2, 2, 2},
        {3, 3, 3}};
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d  ", m[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    //矩阵的转置
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d  ", m[j][i]);
        }
        printf("\n");
    }
    return 0;
}