//练习1-3顶部增加标题 
#include<stdio.h> 

int main()
{
	float fahr,celsius; //华氏度，摄氏度 
	float lower,upper,step; //修改精度，使得显示小数 
	
	lower = 0;
	upper = 320;
	step = 20;
	
	fahr = lower;
	printf("----华氏度转化为摄氏度表----\n"); 
	while(fahr<=upper)
	{
		celsius = 5*(fahr - 32) / 9 ;  //华氏度与摄氏度转换
		printf("华氏度:%3.0f\t摄氏度:%6.1f\n",fahr,celsius); //指定宽度使之右对齐 ,小数点后为显示小数的位数 
		fahr += step;  
	 } 
	 
	 return 0;
}
