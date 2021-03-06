
/******************************************************************************************************
测试题--1
******************************************************************************************************/

// #include <stdio.h>

// int main()
// {
//         int array[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
//         int *p = (int *)(&array + 1);

//         printf("%d\n", *(p - 6));

//         return 0;
// }


/******************************************************************************************************
测试题--2
******************************************************************************************************/

// #include <stdio.h>

// int main()
// {
//         int array[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
//         int (*p)[10] = &array;

//         printf("%d\n", *(*(p+1)-6));

//         return 0;
// }


/******************************************************************************************************
动动手--0 求和
******************************************************************************************************/

// #include <stdio.h>
// #include <stdlib.h>

// int main(int argc, char const *argv[])
// {
// 	int sum = 0;
// 	int i;

// 	printf("%s\n", argv[1]);
// 	for (i = 1; i < argc; i++)
// 	{
// 		sum += atoi(argv[i]);//将字符串转化为数字
// 	}

// 	printf("和为：%d\n", sum);

// 	return 0;
// }


/******************************************************************************************************
指针数组
******************************************************************************************************/

// #include <stdio.h>

// int main()
// {
//         char *p1[5] = {
//                 "让编程改变世界 -- 鱼C工作室",
//                 "Just do it -- NIKE",
//                 "一切皆有可能 -- 李宁",
//                 "永不止步 -- 安踏",
//                 "One more thing... -- 苹果"
//         };
//         int i;

//         for (i = 0; i < 5; i++)
//         {
//                 printf("%s\n", p1[i]);
//         }

//         return 0;
// }


/******************************************************************************************************
数组指针
******************************************************************************************************/


// #include <stdio.h>

// int main()
// {
//         int temp[5] = {1, 2, 3, 4, 5};
//         int (*p2)[5] = &temp;
//         int i;

//         for (i = 0; i < 5; i++)
//         {
//                 printf("%d\n", *(*p2 + i));
//         }

//         return 0;
// }


/******************************************************************************************************
指针数组--数组指针(1)
******************************************************************************************************/

// #include <stdio.h>

// int main(int argc, char const *argv[])
// {
// 	char *array[5] = {"Fishc", "Five", "Star", "Good", "WoW"};//指针数组
// 	char *(*p)[5] = &array;
// 	int i,j;

// 	for (i = 0; i < 5; i++)
// 	{
// 		for (j = 0; (*p)[i][j] != '\0'; j++)
// 		{
// 			printf("%c", (*p)[i][j]);
// 		}
// 		printf("\n");
// 	}

// 	return 0;

// }


/******************************************************************************************************
指针数组--数组指针(2)
******************************************************************************************************/

#include <stdio.h>

int main(int argc, char const *argv[])
{
	char *array[5] = {"Fishc", "Five", "Star", "Good", "WoW"};//指针数组
	char *(*p)[5] = &array;
	int i,j;

        for (i = 0; i < 5; i++)
        {
                for (j = 0; *(*(*p + i) + j) != '\0'; j++)
                {
                        printf("%c ", *(*(*p + i) + j));
                }
                printf("\n");
        }

	return 0;

}
