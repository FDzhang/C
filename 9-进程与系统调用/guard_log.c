#include <stdio.h>
#include <stdlib.h>
#include <time.h>
char* now()
{
	time_t t;
	time(&t) ;
	return asctime(localtime(&t)) ;
}

/*主控程序,用来登记警P的巡逻记录。 */
int main()
{
	char comment[80];
	char cmd[120];
	fgets(comment,80,stdin);
	sprintf(cmd,
		"echo '%s %s' >> reports.log",
		comment,now());
	system(cmd);
	return 0;
} 
