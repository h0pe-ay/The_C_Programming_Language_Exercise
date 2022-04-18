//1-13-1 编写程序，打印输入单词长度的直方图，水平方向 
#include<stdio.h> 
void padding(int count) //用于填充对齐 
{
	int i;
	for(i = 10-count; i > 0; i--) 
		printf(" ");
}
void print_count(int count) //输出直方图 
{
	int i;
	printf("|");
	for(i = 0; i < count; i++)
		putchar('*');
	printf("|");
	printf("\n");
}
int main()
{
	int c,nc;
	int flag = 0;//防止打印多个回车符 
	while((c=getchar()) != EOF)
	{
		if(c != ' ' && c!= '\t' && c!='\n')
		{
			putchar(c);
			nc++;
		}
		else
		{
			padding(nc);
			print_count(nc);
			nc = 0;
		}
		 		
	}
}
