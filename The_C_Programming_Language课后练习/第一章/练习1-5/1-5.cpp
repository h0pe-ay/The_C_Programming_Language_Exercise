//��ϰ1-5 �������ӡ�¶�ת���� 
#include<stdio.h> 

int main()
{
	int fahr;//���϶ȣ����϶� 
	int lower,upper,step;
	
	
	for(fahr = 300; fahr >= 0;fahr -= 20)
	{
		printf("%3d\t%6.1f\n",fahr, 5.0*(fahr - 32) / 9.0);
	}
	 
	 return 0;
}
