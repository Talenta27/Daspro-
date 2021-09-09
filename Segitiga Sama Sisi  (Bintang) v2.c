#include <stdio.h>
int main(){
	int i,j,k,l, max;
	printf("Masukkan ukuran Segitiga : ");
	scanf("%d", &max);
	l=max;
	for(i=1; i<=max; i++)
	{
		for(j=1; j<=l; j++)
		{
			printf(" ");
		}
		for(k=1; k<=i; k++)
		{
			printf("* ");
		}
		printf("\n");
		l--;
	}
}
