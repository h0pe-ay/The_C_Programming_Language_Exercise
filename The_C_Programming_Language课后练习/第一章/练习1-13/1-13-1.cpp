//1-13-1 ��д���򣬴�ӡ���뵥�ʳ��ȵ�ֱ��ͼ��ˮƽ���� 
#include<stdio.h> 
void padding(int count) //���������� 
{
	int i;
	for(i = 10-count; i > 0; i--) 
		printf(" ");
}
void print_count(int count) //���ֱ��ͼ 
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
	int flag = 0;//��ֹ��ӡ����س��� 
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
