//ÿ��һ�����ʴ�ӡ����

#include<stdio.h>

int main()
{
	int c;
	int flag = 0; //�����ӡ����س� 
	while((c = getchar()) != EOF)
	{
		if(c != ' ' && c != '\t')
		{
			putchar(c);
			flag = 0;
		}
		else if(!flag)
		{ 
			putchar('\n');
			flag = 1;
		}
	}
	
	return 0;
	
 } 
