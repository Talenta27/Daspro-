#include <stdio.h>
int main(){
	int i,j,max;
	printf("Masukkan Ukuran Persegi : ");
	scanf("%d", &max);
	
	for(i=1; i<=max; i++)
	{
		for (j=1; j<=max; j++)
		{
			printf(" *");
		}
		printf("\n");
	}
	return 0;
}
