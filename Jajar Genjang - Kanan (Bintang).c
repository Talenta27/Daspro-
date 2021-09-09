#include <stdio.h>
int main(){
	int i,j,k,max;
	printf("Masukkan Ukuran Jajar Genjang : ");
	scanf("%d", &max);
	for(i=1; i<=max; i++)
	{
		for(j=1; j<=i; j++)
		printf(" ");
		
		for(k=1; k<=max; k++)
		printf("0");
		
		printf("\n");
	}
	return 0;
}
