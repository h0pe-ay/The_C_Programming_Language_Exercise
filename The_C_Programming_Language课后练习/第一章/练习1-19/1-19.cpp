//练习1-19 编写函数reverse(s)，将字符串s中的字符顺序颠倒过来。使用该函数编写一个程序，每次颠倒一个输入行中的字符顺序
#include<stdio.h>
#define MAX 10000
int getline(char line[], int limit);
void reverse(char s[],int length);
void copy(char to[],char from[]);
int getline(char line[],int limit)
{
	int i,c;
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

void copy(char to[],char from[])
{
	int i;
	while((to[i] = from[i]) != '\0')
		++i;
}

void reverse(char s[],int length)
{
	char temp[MAX];
	int i,n;
	n = 0;
	copy(temp,s);
	for(i = length-2; i >= 0; --i)
		s[n++] = temp[i];	
}

int main()
{
	char line[MAX];
	int count;
	while((count = getline(line,MAX)) > 0)
	{
		reverse(line,count);
		printf("%s",line);
	}
		
}