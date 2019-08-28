#include <stdio.h>
/*
	unistd.hͷ�ļ�������C��
	׼�⣬����POSIX���е�һ 
	Ա��POSIX��Ŀ���Ǵ���һ
	���ܹ���������������ϵͳ
	��ʹ�õĺ�����
*/
#include <unistd.h>

int main(int argc, char *argv[] )
{
	char *delivery = "";
	int thick = 0;
	int count = 0;
	char ch;
	
	// d�����һ��ð�ţ���Ϊdѡ��Ҫ���ղ�����
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

	// ��������ѡ���Ժ󣬵�һ��ԭ�Ͼͱ����argv[0]��
	for (count = 0; count<argc; count++)
		puts(argv [count]) ;
	return 0;
} 

	
	
	
	
	
	
	
	
	
	

