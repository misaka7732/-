#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void){
		int seki[7][6]={
		{ 32, 0,23, 0,18,42},
		{  0, 7, 0,16, 4, 0},
		{  0, 0, 0, 0, 0, 0},
		{  0, 0, 0, 0, 0, 0},
		{  0, 0, 0, 0, 0, 0},
		{  0, 0, 0, 0, 0, 0},
		{  0, 0, 0, 0, 0, 0},

	};
	int a, b,n,i,c,d,f=0;
	char temp[80];

	srand((unsigned)time(NULL));

	for(i=1;i<=41;i++){
		do{
			if(i==32||i==7||i==18||i==4||i==16||i==23) f = 1;
			else{
				a= rand()%7;
				b= rand()%6;
				if(seki[a][b]==0){
					seki[a][b]=seki[a][b]+i;
					f=1;
//					printf(" a");
				}
				else{
					f=0;
//					printf(" b");
				}
			}
		}while(f==0);
	}
	printf("Are you ready?");
	fflush(stdin);
	gets(temp);
	puts("");
	printf("             I教卓I        \n");
	for(c=0;c<7;c++){
		printf(" I ");
		for(d=0;d<6;d++){
			n = seki[c][d];
			for(i=0;i<100000000;i++){}
			if(n==42||n==32)printf("  ");
			else printf("%2d",n);
			printf(" I ");
		}
		puts("");
	}

}
