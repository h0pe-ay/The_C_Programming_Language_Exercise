//1-14 打印输入中各个字符出现频度的直方图
#include<stdio.h>
#define MAX 256 //26个英文字符 
void print_count(int count)
{
	int i;
	printf("|");
	for(i = 0; i < count; i++)
		printf("■");
	printf("|"); 
}
int main()
{
	char c;
	int i;
	int alphabet[MAX] = {0}; //字符型大小为256字节，可见字符为32-126 
	while( (c = getchar()) != EOF)
		alphabet[c]++;	
	for(i = 32; i <= 126; i++)
	{
		printf("%c:%d\t",i,alphabet[i]);
		print_count(alphabet[i]);
		printf("\n");
	}
	
	return 0;
 } 
