#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int answer=1013;
	int trials, a=0;
	
	do 
	{
		printf("���߸� ������ ����Ѵ�.\n");
		scanf("%i",&a);				//���ǵ������� ����
	
		if (a>= answer)
			printf("too big!!!!!!");
		else
			printf("too low!!!!!!");
			
		trials++;
	}	while ( a != answer);
	
	
	printf("�¾Ҵ� ���ڽ� ������ �ڰŶ�. �� %d �� Ʋ�ȴ� ��û�� ", trials);

	
	return 0;
	
}

