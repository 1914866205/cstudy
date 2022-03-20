#include <stdio.h>
#include <math.h>
#define NAME "倪涛涛" //定义一个常量，预处理在头部定义，此处不可以加分号    #define 标识符 常量   这是宏定义
int main()
{
    int a;
    char b;
    float c;
    double d;

    a = 520;
    b = 'f';
    c = 3.14;
    d = 3.1415926535897962;
    printf("a的值为 %d \n", a);                               // %d  是整型
    printf("b的值为 %c \n", b);                               // %c  是char类型
    printf("圆周率是的值为 %.2f \n", c);                      //  %f 是浮点型，单精度和双精度都是 %f    %.2f 精确到小数点后两位
    printf("d的值精确到小数点后9位，共11位为: %11.9f \n", d); // %11.9  这个占位总占位 11  ，  精确到小数点后9位
    printf("%s\n",NAME);//编辑器会在编译时在后面加上 '\0' 表示字符串的结束
    // sizeof运算符   用于获取数据类型或表达式的长度,单位是字节
    //  sizeof(object);  //sizeof(对象)
    //  sizeof(type_name);  //sizeof(类型)
    //  sizeof object;  //sizeof 对象
    printf("size of short int is %d \n", sizeof(short int));
    printf("size of int is %d \n", sizeof(int));
    printf("size of long int is %d \n", sizeof(long int));
    printf("size of long long int is %d \n", sizeof(long long int));
    printf("size of float is %d \n", sizeof(float));
    printf("size of char is %d \n", sizeof(char));
    printf("size of a is %d \n", sizeof(a));
    printf("size of b is %d \n", sizeof b);
    // signed 可以存放符号位     带符号
    // unsigned 不可以存放符号位  无符号
    signed int m = -3;  //默认情况下int是signed类型
    unsigned int n = -1;  //已经溢出  及 2^32 -1
    printf("size of %d is %d \n", m, sizeof(m)); //带符号
    printf("size of %u is %d \n", n, sizeof(n));  //无符号

    int result = pow(2, 32) - 1;
    printf("result = %d \n",result);
    unsigned int result2 = pow(2, 8) - 1;
    printf("result = %u \n", result2);

    char e = 'E';
    printf("%c =%d \n", e, e); //%c表示为一个char类型占位。%d表示为一个整型占位。即把char转为整型
    int f = 70;
    printf("%d 的char值是%c \n", f, f);
    // 不要想当然地认为电脑的char是unsigned
    char height = 173;
    printf("涛涛的身高为%dcm", height); //涛涛的身高为-83
    unsigned char height2 = 173;
    printf("涛涛的身高为%dcm", height2); //涛涛的身高为173
    char name[3] = {'n', 't', 't'};
    printf("%s\n", name); // ntt��F
    printf("hello\n");
    char name2[4] = {'n', 't', 't','\0'};
    printf("%s\n", name2); // ntt     字符串会以 \0 "字符"结尾    %s是输出字符串
    printf("hello\n");
    char name3[] = {'n', 't', 't', '\0'};
    printf("%s\n", name3); // ntt
    printf("hello\n");
    //或者直接使用字符串常量，常量会自动在末尾添加 \0
    char name4[] = {"ntt"};
    printf("%s\n", name4); // ntt
    char name5[] = "ntt";
    printf("%s\n", name5); // ntt
    printf("%d\n",5/4); // 1  直接向下取整
    printf("%d\n", 5 / 2); // 2
    printf("%d\n", 5.0 / 3.0);
    printf("%d\n", 5% 3);
    // printf("%d", 5.0 % 3.0);  报错，必须全是整型
    int i, j, k;
    i = 1 + 2;
    j = 1 + 2 * 3;
    k = i + j + -1 + pow(2, 3);
    printf("%d\n", i);
    printf("%d\n", j);
    printf("%d\n", k);
    printf("整型输出：%d\n", 1+(int)1.8);//即 1.8会强制转化为 int值 为1     1+1=2
    printf("整型输出：%d\n", 1+2);
    printf("浮点型输出：%f\n", 1+(int)1.8);//强制类型转换损失精度
    printf("浮点型输出：%f\n", 1.0 +1.8);
    //C语言用1表示真。用0表示假
    printf("%d\n", 1>0);//1   
    printf("%d\n", 1>2);//0
    //短路运算
    int a1 = 3;
    int b1 = 3;
    if ((a1=1)&&(b1=5)){
        printf("a1=%d,b1=%d \n", a1, b1);
    }  //a1=1 b1=5
    if ((a1 = 2) || (b1 = 4))
    {
        printf("a1=%d,b1=%d \n", a1, b1);
    }  //a1=2,b1=5   b1被短路了

    // i;
    // printf("请输入分数："); //输出语句
    // // scanf("%d", i); //输入一个整数
    // scanf("%d", &i); //输入一个整数并赋值在i的地址中
    // if (i>=90)
    // {
    //     printf("A\n");
    // }else if (i < 90&&i>=60) {
    //     printf("B\n");
    // }else{
    //     printf("C\n");
    // }

    i=2;
    switch (i) {
        case 1:
            printf("i是1\n");
            break;   //不加上会case穿透
        case 2:
            printf("i是2\n");
            break;
        default:
            printf("i不是1或2\n");
            break;
    }
    printf("i是%d \n", i == 1?1:2);
    // getchar();放在输入后面，可以过滤掉回车的字符  
    return 0;
}     