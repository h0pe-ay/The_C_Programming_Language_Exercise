//1-14 ��ӡ�����и����ַ�����Ƶ�ȵ�ֱ��ͼ
#include<stdio.h>
#define MAX 256 //26��Ӣ���ַ� 
void print_count(int count)
{
	int i;
	printf("|");
	for(i = 0; i < count; i++)
		printf("��");
	printf("|"); 
}
int main()
{
	char c;
	int i;
	int alphabet[MAX] = {0}; //�ַ��ʹ�СΪ256�ֽڣ��ɼ��ַ�Ϊ32-126 
	while( (c = getchar()) != EOF)
		alphabet[c]++;	
	for(i = 32; i <= 126; i++)
	{
		printf("%c:%d\t",i,alphabet[i]);
		print_count(alphabet[i]);
		printf("\n");
	}
	
	return 0;
 } 
