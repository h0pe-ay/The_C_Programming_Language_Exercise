//1-15 重写温度转换程序，使用函数实现 
#include<stdio.h>
#define LOWER 0
#define UPPER 300
#define STEP 20 
float convert(float fahr)
{
	float celsius;
	celsius = 5*(fahr-32)/9;
	return celsius;
 } 
int main()
{
	float celsius; 
	float fahr = LOWER;
	while(fahr <= UPPER)
	{
		celsius = convert(fahr);
		printf("fahr:%3.0f\tcelsius:%6.1f\n",fahr,celsius);
		fahr += STEP;
	}
	return 0;
 } 
