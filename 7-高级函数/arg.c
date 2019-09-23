#include <stdarg.h>
#include <stdio.h>

void print_ints(int args, ...){
	va_list ap;
	va_start(ap,args);
	int i;
	for(int i=0;i<args;i++)	{
		printf("argumet: %i\n",va_arg(ap,int));
	}
	va_end(ap);
}

int main(){
	print_ints(3,79,101,32);
	return 0;
}

