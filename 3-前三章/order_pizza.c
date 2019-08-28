#include <stdio.h>
/*
	unistd.h头文件不属于C标
	准库，而是POSIX库中的一 
	员。POSIX的目标是创建一
	套能够在所有主流操作系统
	上使用的函数。
*/
#include <unistd.h>

int main(int argc, char *argv[] )
{
	char *delivery = "";
	int thick = 0;
	int count = 0;
	char ch;
	
	// d后面跟一个冒号，因为d选项要接收参数。
	while ((ch = getopt(argc, argv, "d:t"))!= EOF){
//		printf("optind -- %d\n",optind); 
//		printf("optarg -- %s\n",optarg); 
		switch (ch) {
		case 'd' :
			delivery = optarg;
			break;
		case 't' :
			thick = 1;
			break;
		default:
			fprintf(stderr, "Unknown option: '%s'\n", optarg) ;
			return 1;
		}
	}
	
	argc -= optind;
	argv += optind;
	
	if (thick) 
		puts ("Thick crust.");
	if (delivery[0])
		printf ("To be delivered %s. \n", delivery);
		
	puts ("Ingredients:") ;

	// 程序处理完选项以后，第一种原料就变成了argv[0]。
	for (count = 0; count<argc; count++)
		puts(argv [count]) ;
	return 0;
} 

	
	
	
	
	
	
	
	
	
	

