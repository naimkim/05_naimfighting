#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int answer=1013;
	int trials, a=0;
	
	do 
	{
		printf("맞추면 낮잠을 허락한다.\n");
		scanf("%i",&a);				//조건따지기전 문장
	
		if (a>= answer)
			printf("too big!!!!!!");
		else
			printf("too low!!!!!!");
			
		trials++;
	}	while ( a != answer);
	
	
	printf("맞았다 이자식 낮잠을 자거라. 너 %d 번 틀렸다 멍청아 ", trials);

	
	return 0;
	
}

