
#include <stdio.h>
int main (){
	int i,j,max;
	printf ("Masukkan ukuran segitiga : ");
	scanf("%d", &max);
	
	for (i=1; i<=max; i++)
	{
		for (j=1; j<=max; j++)
		{
			if((i==1||i==max)||(j==1||j==max))
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}
