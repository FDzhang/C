#include <stdio.h> 
#include <string.h>

int NUM_ADS = 7;
char *ADS[] = {
"William: SBM GSOH likes sports, TV, dining",
"Matt: SWM NS likes art, movies, theater",
"Luis: SLM ND likes books, theater, art",
"Mike: DWM DS likes trucks, sports and bieber" ,
"Peter: SAM likes chess, working out and art",
"Josh: SJM likes sports, movies and theater",
"Jed: DBM likes theater, books and dining"
};



void find(){
	int i;
	puts("Search results: ");
	puts("-----------------------");
	
	for(int i=0;i<NUM_ADS;i++){
		if(strstr(ADS[i],"sports")
		&& !strstr(ADS[i],"bieber")){
			printf("%s\n",ADS[i]);
		}
		
	}
	puts("------------------------");
}

int sports_no_bieber(char *s){
	return strstr(s,"sports") && !strstr(s,"bieber");
}
int sports_or_workout(char *s){
	return strstr(s,"sports") || strstr(s,"working out");
}
int ne_theater(char *s){
	return strstr(s,"NS") && strstr(s,"theater");
}
int arts_theater_or_dinning(char *s){
	return strstr(s,"arts") || strstr(s,"theater") || strstr(s,"dinning");
}

int main(){
	find(); 
	return 0;
}
