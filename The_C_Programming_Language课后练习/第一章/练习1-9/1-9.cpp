//练习1-9 编写一个输入复制到输出的程序，多个空格使用一个空格代替 
#include<stdio.h>
int main()
{
	int c;
	int enter_flag = 0; //用于判断是否输出过空格 
	
	while((c = getchar()) != EOF )
	{
		if(!enter_flag)
		{
			putchar(c);
			if(c == ' ') //记录已经输出过空格 
				enter_flag = 1;
		}
		
		if(enter_flag && c != ' ') //若不是空格则去除记录 
			enter_flag = 0;
	}
	
	return 0;
}
