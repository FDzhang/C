/*
string.h
strchr() 在字符串中查找字符
strcmp() 比较字符串
strstr() 在字符串中查找字符串
strcpy() 复制字符串
strlen() 返回字符串的长度
strcat() 连接字符串

程序创建了一个字符串数组，并利用标准库中的字
符串处理函数搜索数组中的歌名，最后找到了用户想要找的
歌曲

*/

#include <stdio.h>
#include <string.h> 
char tracks[] [80] = {
	"I left my heart in Harvard Med School",
	"Newark, Newark - a wonderful town",
	"Dancing with a Dork",
	"From here to maternity" ,
	"The girl from Iwo Jima",
};

void find_track (char search_for[])
{
	int i;
	for(i=0;i<5;i++){
		if (strstr (tracks[i],search_for) )
			printf ("Track %i: '%s'\n", i, tracks[i]);
	}
}

void print_reverse (char *s)
{
	size_t len = strlen(s) ;
	char *t =s+len-1;
	while (t>=s){
		printf ("%c"，*t);
		t--;
	}
	puts ("") ;
}


int main(){
	char search_for[8] ; 
	printf ("Search for: ");
	fgets (search_for, 8, stdin);
	search_for[strlen(search_for)-1]='\0';
	find_track (search_for) ;

	return 0;
} 
