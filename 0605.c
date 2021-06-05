#include<stdio.h>
int main(void){
	int num[3][5][3];
	int i, j, k, suu = 0;

	for(i=0; i<3; i++){//syo
		for(j=0; j<5; j++){
			for(k=0; k<3; k++){
				num[i][j][k] = 0;
			}
		}
	}

	for(j=0; j<5; j++){//pa1
		num[0][j][2] = 1;
	}

	for(k=0; k<3; k++){//pa2
		num[1][0][k] = 1;
		num[1][2][k] = 1;
		num[1][4][k] = 1;
	}
	num[1][1][2] = 1;
	num[1][3][0] = 1;

	for(k=0; k<3; k++){//pa3
		num[2][0][k] = 1;
		num[2][2][k] = 1;
		num[2][4][k] = 1;
	}
	num[2][1][2] = 1;
	num[2][3][2] = 1;

	do{
		printf("数値を入力して下さい（1~3, 終了=0）:");
		scanf("%d",&suu);
		if(suu > 0 && suu <= 3){
			for(j=0; j<5; j++){
				for(k=0; k<3; k++){
					if(num[suu - 1][j][k] == 1){
						printf("■");
					}else{
						printf("□");
					}
				}
				printf("\n");
			}
		}
	}while(suu != 0);
	printf("プログラム終了");

	return 0;
}
