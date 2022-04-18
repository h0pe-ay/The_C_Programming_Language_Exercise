//1-18 编写一个程序，删除每个输入行末尾的空格及制表符，并删除完全是空格的行
#include<stdio.h>
#define MAX 1000
int getline(char line[], int limit);
void delete_space(char line[],int length);
int main()
{
	char line[MAX];
	int count;
	while( (count = getline(line,MAX)) >  0)
	{
		delete_space(line,count);
		printf("%s",line);
	}
	return 0;
}

int getline(char line[],int limit)
{
	int i,c;
	for(i = 0; i < limit -1 && (c = getchar()) != EOF && c != '\n'; ++i)
		line[i] = c;
	if(c == '\n')
	{
		line[i] = c;
		++i;
	}
	line[i] = '\0';
	return i;
}

void delete_space(char line[], int length)
{
	int i;
	for(i = length-2; i >= 0; i--)
		if(line[i] == ' ' || line[i] == '\t')
			line[i] = '\0';
		else
			break;
	if(i > 0)
		line[i+1] = '\n'; 
}