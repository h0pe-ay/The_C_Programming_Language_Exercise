//练习1-20 编写程序detab，将制表符转换为空格
#include<stdio.h>
#define N 4 //一个制表符等于四个空格
#define MAX 10000
void detab(char line[],int length); //用于制表符和空格的转换
int getline(char line[],int limit);

int getline(char line[],int limit)
{
	int c,i;
	i = 0;
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

void detab(char line[],int length)
{
		int i,j;
		i = j = 0;
		while(line[i] != '\0')
		{
			if(line[i] == '\t')
			{
				for(j = length-1; j > i; --j)
					line[j+4] = line[j];
				for(j = i;j < i+n; ++j)
					line[j] = ' ';
				i += 4;	 //下标后移四个	
				length += 3; //长度增加三个，因为\t也占用一个字符				
			}
			else
				i++;
		}					
}

int main()
{
	char line[MAX];
	int count;
	while( (count = getline(line,MAX)) > 0)
	{
		detab(line,count);
		printf("%s",line);
	}
}