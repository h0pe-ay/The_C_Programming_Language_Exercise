//统计空格、制表符与换行符个数

#include<stdio.h>

int main()
{
	int count_space,count_table,count_enter; //记录空格、制表符、换行符个数
	char c;
	while((c = getchar()) != EOF)
		if(c == ' ')
			count_space++;
		else if(c == '\t')
			count_table++;
		else if(c == '\n')
			count_enter++;		
	printf("space:%3d\ttable:%3d\tenter:%3d\n",count_space,count_table,count_enter);
	return 0;
 } 
