
/*
0. 写一个程序，统计用户输入的字符串中，各个元音字母出现的次数（包含大小写的 a、e、i、o、u）
*/

// #include <stdio.h>
// int main()
// {
// 	char ch;
// 	int num_a=0, num_e=0, num_i=0, num_o=0, num_u=0;

// 	printf("请输入一串字符串：\n");

// 	while((ch = getchar()) != '\n')
// 	{
// 		if (ch == 'a' || ch == 'A')
// 		{
// 			num_a += 1;
// 			continue;
// 		}

// 		if (ch == 'e' || ch == 'E')
// 		{
// 			num_e += 1;
// 			continue;
// 		}

// 		if (ch == 'i' || ch == 'I')
// 		{
// 			num_i += 1;
// 			continue;
// 		}	

// 		if (ch == 'o' || ch == 'O')
// 		{
// 			num_o += 1;
// 			continue;
// 		}		

// 		if (ch == 'u' || ch == 'U')
// 		{
// 			num_u += 1;
// 			continue;
// 		}		
		
// 	}

// 	printf("a(%d), e(%d), i(%d), o(%d), u(%d)\n",num_a, num_e, num_i, num_o, num_u );

// 	return 0;

// }





// #include <stdio.h>

// int main()
// {
//         char ch;
//         int a, e, i, o, u;

//         a = 0;
//         e = 0;
//         i = 0;
//         o = 0;
//         u = 0;

//         printf("请输入一个英文句子：");

//         while ((ch = getchar()) != '\n')
//         {
//                 switch (ch)
//                 {
//                         case 'a':
//                         case 'A': a++;
//                                   break;
//                         case 'e':
//                         case 'E': e++;
//                                   break;
//                         case 'i':
//                         case 'I': i++;
//                                   break;
//                         case 'o':
//                         case 'O': o++;
//                                   break;
//                         case 'u':
//                         case 'U': u++;
//                                   break;
//                 }
//         }

//         printf("您输入的句子中，包含元音字母%d个！\n", a + e + i + o + u);
//         printf("其中:a(%d),e(%d),i(%d),o(%d),u(%d)\n", a, e, i, o, u);

//         return 0;
// }




/*
1. 求 10000 以内的素数个数
*/

// #include <stdio.h>

// int main()
// {
//     int count = 2; // 已知2和3是素数
//     int i, j;
//     _Bool flag = 1;

//     for (i = 5; i < 10000; i++)
//     {
//         for (j = 2; j < i / 2; j++)
//         {
//             if (i % j == 0)
//             {
//                     flag = 0;
//                     break;
//             }
//         }

//         if (flag)
//         {
//                 count++;
//         }
//         else
//         {
//                 flag = 1;
//         }
//     }

//     printf("10000以内共有%d个素数！\n", count);

//     return 0;
// }


/*
1. 凯撒加密，字母左移3个字母，循环
*/

#include <stdio.h>

int main()
{
    int ch;

    printf("请输入明文：");

    while ((ch = getchar()) != '\n')
    {
        if (ch >= 'a' && ch <= 'z')
        {
                putchar('a' + (ch - 'a' + 3) % 26);
                continue;
        }

        if (ch >= 'A' && ch <= 'Z')
        {
                putchar('A' + (ch - 'A' + 3) % 26);
                continue;
        }

        putchar(ch);
    }

    putchar('\n');

    return 0;
}
