//��ϰ1-3�������ӱ��� 
#include<stdio.h> 

int main()
{
	float fahr,celsius; //���϶ȣ����϶� 
	float lower,upper,step; //�޸ľ��ȣ�ʹ����ʾС�� 
	
	lower = 0;
	upper = 320;
	step = 20;
	
	fahr = lower;
	printf("----���϶�ת��Ϊ���϶ȱ�----\n"); 
	while(fahr<=upper)
	{
		celsius = 5*(fahr - 32) / 9 ;  //���϶������϶�ת��
		printf("���϶�:%3.0f\t���϶�:%6.1f\n",fahr,celsius); //ָ�����ʹ֮�Ҷ��� ,С�����Ϊ��ʾС����λ�� 
		fahr += step;  
	 } 
	 
	 return 0;
}
