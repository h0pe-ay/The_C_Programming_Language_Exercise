//��ϰ1-4 ��д���϶�ת��Ϊ���϶ȵ�ת���� 
#include<stdio.h> 

int main()
{
	float fahr,celsius; //���϶ȣ����϶� 
	float lower,upper,step; //�޸ľ��ȣ�ʹ����ʾС�� 
	
	lower = 0;
	upper = 300;
	step = 20;
	
	fahr = celsius;
	
	while(fahr<=upper)
	{
		fahr = (9  *  celsius)  /  5  +  32;  //���϶��뻪�϶�ת��
		printf("���϶�:%3.0f\t%���϶�:%6.1f\n",fahr,celsius); //ָ�����ʹ֮�Ҷ��� ,С�����Ϊ��ʾС����λ�� 
		celsius += step;  
	 } 
	 
	 return 0;
}
