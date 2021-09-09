
#include <stdio.h>
int main(){
	int i,j,k,max;
	printf("Masukkan Ukuran Segitiga : ");
	scanf("%d", &max);
	
	for(i=max; i>=1; i--)
	{
		for(j=1; j<=max-i; j++)
		{
			printf(" ");
		}
		for(k=i; k<=2*i-1; k++)
		{
			printf("*");
		}
		for(k=0; k<i-1; k++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
