//ͳ�ƿո��Ʊ���뻻�з�����

#include<stdio.h>

int main()
{
	int count_space,count_table,count_enter; //��¼�ո��Ʊ�������з�����
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
