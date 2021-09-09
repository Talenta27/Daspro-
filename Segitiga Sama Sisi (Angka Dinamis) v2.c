#include <stdio.h>
int main(){
	int i,j,k,l,max;
	printf("Masukkan Ukuran Segitiga : ");
	scanf("%d", &max);
	
	for(i=1; i<=max; i++)
	{
		for(j=1; j<=max-i; j++)
		printf(" ");
		
		for(k=1; k<=2*i-1; k++)
		printf("%d", i);
		
		printf("\n");
	}
}
