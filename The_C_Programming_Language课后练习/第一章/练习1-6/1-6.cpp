//验证表达式getchar()!=EOF的值是0还是1 
#include<stdio.h>
int main()
{
	int flag;
	
	flag = (getchar() != EOF); //输入正常的字符时为1，当输入crlt+Z时输出0 
	
	printf("%d",flag); 
	
	return 0; 
}
