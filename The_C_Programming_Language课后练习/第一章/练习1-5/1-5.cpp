//练习1-5 以逆序打印温度转换表 
#include<stdio.h> 

int main()
{
	int fahr;//华氏度，摄氏度 
	int lower,upper,step;
	
	
	for(fahr = 300; fahr >= 0;fahr -= 20)
	{
		printf("%3d\t%6.1f\n",fahr, 5.0*(fahr - 32) / 9.0);
	}
	 
	 return 0;
}
