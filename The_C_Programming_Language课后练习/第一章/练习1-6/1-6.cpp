//��֤���ʽgetchar()!=EOF��ֵ��0����1 
#include<stdio.h>
int main()
{
	int flag;
	
	flag = (getchar() != EOF); //�����������ַ�ʱΪ1��������crlt+Zʱ���0 
	
	printf("%d",flag); 
	
	return 0; 
}
