//��ϰ1-9 ��дһ�����븴�Ƶ�����ĳ��򣬶���ո�ʹ��һ���ո���� 
#include<stdio.h>
int main()
{
	int c;
	int enter_flag = 0; //�����ж��Ƿ�������ո� 
	
	while((c = getchar()) != EOF )
	{
		if(!enter_flag)
		{
			putchar(c);
			if(c == ' ') //��¼�Ѿ�������ո� 
				enter_flag = 1;
		}
		
		if(enter_flag && c != ' ') //�����ǿո���ȥ����¼ 
			enter_flag = 0;
	}
	
	return 0;
}
