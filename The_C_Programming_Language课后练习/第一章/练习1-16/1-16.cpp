// 练习1-16 修改打印最长文本行的程序的主程序main,使之可以打印任意长度的输入行的长度，并尽可能多地打印文本
#include<stdio.h>
#define MAX 1000 //最大输入的字符个数为1000
int getline(char line[],int limit);
void copy(char to[],char from[]);
/*
 line数组用于存储字符
 limit用于限制输入长度 
 用于接受一行输入
*/
int getline(char line[],int limit)
{
	int i;
	char c;
	for(i = 0; i < limit-1 && (c = getchar()) != EOF && c != '\n'; ++i)
		line[i] = c;
	if(c == '\n')
	{
		line[i] = c;
		++i;
	}
	line[i] = '\0';
	
	return i;
}
int main()
{
	char line[MAX];
	int count; //记录输入的字符个数
	while( (count = getline(line,MAX) )!= 0)
	{
		printf("count:%d,input:%s\n",count,line);		
	}
	return 0;
}