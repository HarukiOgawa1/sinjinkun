#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void){
	int i;
	
	srand((unsigned int)time(NULL));

	for(i=0;i<10;i++){
		printf("%d\n",0 + rand() % 10);

	}
	return 0;
}
