//练习1-4 编写摄氏度转化为摄氏度的转化表 
#include<stdio.h> 

int main()
{
	float fahr,celsius; //华氏度，摄氏度 
	float lower,upper,step; //修改精度，使得显示小数 
	
	lower = 0;
	upper = 300;
	step = 20;
	
	fahr = celsius;
	
	while(fahr<=upper)
	{
		fahr = (9  *  celsius)  /  5  +  32;  //摄氏度与华氏度转换
		printf("华氏度:%3.0f\t%摄氏度:%6.1f\n",fahr,celsius); //指定宽度使之右对齐 ,小数点后为显示小数的位数 
		celsius += step;  
	 } 
	 
	 return 0;
}
