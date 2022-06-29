#include<stdio.h>
#include<string.h>
#define MaxN 100
char octal8[MaxN];//用于存放输入的八进制数
int main()
{
	while(scanf("%s",octal8)!=EOF)
	{
		char octal10[MaxN]={'0'};//用于存放要输出的10进制数
		int index =0;//表示十进制中的数到了第几位了。
		int j;
        int length_octal8 = strlen(octal8);
		for(int i = length_octal8 - 1 ; i > 1 ; i--)//从八进制中的最后一位开始做除法
		{
			int num = octal8[i] - '0';//把字符转换成数字，表示余数
			for( j = 0 ; j < index || num ; j++)//如果没有到10进制的最后一位或者余数不为0就继续运行；
			{
				int temp = num * 10 + ( j < index ? octal10[j] - '0' : 0 );
				octal10[j] = temp / 8 + '0';
				num = temp % 8;
			}
			index = j;//更新最长位
		}
		octal10[j] = '\0';
		printf("%s [8] = 0.%s [10]\n",octal8,octal10);
	}
	return 0;
}
