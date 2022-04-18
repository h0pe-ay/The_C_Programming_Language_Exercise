//每行一个单词打印输入

#include<stdio.h>

int main()
{
	int c;
	int flag = 0; //避免打印多个回车 
	while((c = getchar()) != EOF)
	{
		if(c != ' ' && c != '\t')
		{
			putchar(c);
			flag = 0;
		}
		else if(!flag)
		{ 
			putchar('\n');
			flag = 1;
		}
	}
	
	return 0;
	
 } 
