/*
totaller.c
下面这个程序帮助Head First餐厅的服务员更好地进行服务。代码自动计算总账，并
为每笔消费收取消费税，请填满所有空格。
*/

#include <stdio.h>


float total = 0.0; 
short count = 0; 
short tax_percent = 6;
float add_with_tax(float f){
	// 有了.0，计算就会以浮点数进行，否则表达式会返回整数。
	float tax_rate = 1 + tax_percent / 100.0;
	total = total + (f*tax_rate) ;
	count=count+1;
	return total;
}

int main()
{
	float val;
	printf ("Price of item: ") ;
	while (scanf ("%f",&val) == 1) {
		printf ("Total so far: %.2f\n",add_with_tax(val)) ;
		printf ("Price of item: ") ;
	}
	printf ("\nFinal total: %.2f\n",total);
	printf ("Number of items: %hi\n", count);
	return 0;
}

