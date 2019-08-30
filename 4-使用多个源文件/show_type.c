#include <stdio.h>
// 含有表示整型(比如int和char) 大小的值。 
#include <limits.h>
// 含有表示float和double类型大小的值。
#include <float.h> 

int main()
{
	printf ("The value of INT_MAX is %i\n",INT_MAX);
	printf ("The value of INT_MIN is %i\n",INT_MIN);
	printf("An int takes %i bytes\n", sizeof(int));
	
	
	printf ("The value of FLT_MAX is %f\n",FLT_MAX);
	printf ("The value of FLT_MIN is %.50f\n",FLT_MIN);
	printf("A float takes %i bytes\n", sizeof(float));
	
	printf ("The value of CHAR_MAX is %i\n",CHAR_MAX);
	printf ("The value of CHAR_MIN is %i\n",CHAR_MIN);
	printf("An int takes %i bytes\n", sizeof(char));
	
	printf ("The value of DBL_MAX is %f\n",DBL_MAX);
	printf ("The value of DBL_MIN is %.50f\n",DBL_MIN);
	printf("An int takes %i bytes\n", sizeof(double));
	
	return 0;
}

