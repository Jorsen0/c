
/******************************************************************************************************
动动手：0. 相信你已经知道什么是大端和小端了（如果还不清楚请戳 -> 传送门），现在请编写一个程序，测试一下你当前的计算机是大端还是小端？
******************************************************************************************************/

#include <stdio.h>

int main(void)
{
        int num = 0x12345678;
        unsigned char *p = (unsigned char *)&num;

        if (*p == 0x78)
        {
                printf("您的机器采用小端字节序。\n");
        }
        else
        {
                printf("您的机器采用大端字节序。\n");
        }

        printf("0x12345678 在内存中依次存放为：0x%x 0x%x 0x%x 0x%x\n", p[0], p[1], p[2], p[3]);

        return 0;
}