//练习1-10  编写一个将输入复制到输出的程序，将\t，\b，\\显示打印

#include<stdio.h> 

int main()
{
	int c;
	
	while( (c = getchar()) != EOF)
	{
		if(c == '\t')
		 {
		 	putchar('\\');
		 	putchar('t');
		 }
		 else if( c == '\b')
		 {
		 	putchar('\\');
		 	putchar('b');
		 }
		 else if(c == '\\')
		 {
		 	putchar('\\');
		 	putchar('\\');
		 }
		 else
		 {
		 	putchar(c);
		 }
	}
	return 0;
}
