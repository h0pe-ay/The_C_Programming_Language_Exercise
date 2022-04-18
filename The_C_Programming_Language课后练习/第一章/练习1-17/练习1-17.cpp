//练习1-17 编写一个程序，打印长度大于80个字符的所有输入行
#include<stdio.h>
#define MAX 1000

int getline(char line[],int limit)
{
	int i;
	char c;
	for(i = 0; i < limit-1 && (c = getchar()) != EOF && c != '\n'; ++i )
		line[i] = c;
	if( c == '\n')
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
	int count;
	while((count = getline(line,MAX)) > 0)
	{
		if(count >= 80)
			printf("over 80:%s\n",line);
	}
	
}