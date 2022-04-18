//1-13-2 编写程序，打印输入单词长度的直方图，垂直方向 
#include<stdio.h>
#define MAX 10
void alter_histogram(char histogram[MAX][MAX],int index,int count)
{
	int i;
	for(i = MAX-1; i >= MAX-count; i--)
		histogram[i][index] = '*';
}
int main()
{
	char histogram[MAX][MAX]; //可以存储10*10的直方图
	char str[MAX][MAX]; //用于存储单词，最多可以存储10个 
	int i,j,nc = 0,index = 0,nw = 0;
	char c; 
	for(i = 0; i < MAX; i++)
		for(j = 0; j< MAX; j++)
		{
			histogram[i][j] =' ';
			str[i][j] = '\0';
		}
	
	while((c = getchar()) != EOF)
	{
		if(index >= 10 || nc >= 10 || nw >= 10)
			break;
		if(c != '\t' && c != ' ' && c != '\n')
		{
			str[index][nc] = c; 
			nc++;
		}
		else
		{

			alter_histogram(histogram,index,nc);
			nc = 0;
			index++;
			nw++;
		}
	}
		for(i = 0; i < MAX; i++)
		{
			for(j = 0; j< MAX; j++)
				printf("%c\t",histogram[i][j]);
			printf("\n");
		}
		for(i = 0;i < nw; i++)
			printf("%s\t",str[i]);
	return 0;
 } 
