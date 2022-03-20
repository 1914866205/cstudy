#include<stdio.h>
#include<string.h>
int main()
{
    char str[] = "ntt";
    // sizeof  所占空间大小
    // 4      s t r \n  是4
    printf("sizeof str=%d\n", sizeof(str));
    // 字符串的长度
    // 3      s t r 
    printf("sizeof str=%u\n", strlen(str));
    // 字符串拷贝
    char str1[] = "hello c";
    char str2[] = "world";
    char str3[20];
    printf("str1:%s\n", str1);
    printf("str2:%s\n", str2);
    printf("str3:%s\n", str3);
    /**
     * 字符串拷贝
     * 把原数组的值拷贝给目标数组（被拷贝的数组(原数组)的长度必须大于等于目标数组的长度）
     * 即有5个元素要被拷贝，不能放到4个盒子里
     * str1长度为7  str2长度为12
     * strcpy(拷贝放的地方，被拷贝的原字符)
     */
    strcpy(str2, str1); // 被拷贝的是 str1
    //  str1:c        
    // str2:    hello c
    // strcpy(str1, str2); //被拷贝的是 str2 都是world
        strcpy(str3, "!");
    printf("str1:%s\n", str1);
    printf("str2:%s\n", str2);
    printf("str3:%s\n", str3);
    printf("===================\n");

/**
 * @brief 受限制的拷贝 strncpy
 * 
 */
    char str4[] = "hello world";
    char str5[20];
    strncpy(str5, str4,5);
    str5[5] = '\0';  //拷贝时不会自动追加字符串结束符，需要手动追加
    printf("str5:%s\n", str5);
    /**
     * @brief
     *@brief 连接字符串(字符串拼接) * strcat(str1, str2);
     把str2拼接到str1上
            *strncat 会在连接后自动追加结束符 '\0' *
        /
        // printf("str6:%s\n", str4+str5);//错的，C里面不可以直接字符串拼接
        char str6[] = "hello c";
    char str7[] = "world";
    strcat(str6, "     ");
    strcat(str6, str7);
    printf("str6:%s\n", str6);
    printf(strcat(str6,str7));
    /**
     * @brief compare
     * @brief 比较字符串
     * strcmp(str1.str2)相等的话返回0，不相等则返回1
     * strncmp(str1,str2,n)只比较前n个
     */
    char str10[] = "ntt";
    char str11[] = "ntt";
    char str12[] = "ntt1";
    printf("%d\n",strcmp(str10,str11)); // 0
    printf("%d\n",strcmp(str12,str11)); // 1
    printf("%d\n",strncmp(str12,str11,3)); // 0
    if (!strcmp(str10,str11))
    {
        printf("字符相等");
    }else {
        printf("字符不相等");
    }
    
    return 0;
}