/*
Name	:	Hansen Henok Oktavianus Situmorang
Prodi	:	D3-TI 2
NIM		:	11318055
*/

#include <stdio.h>
int main (){
	int i,j,max;
	printf ("Masukkan ukuran segitiga : ");
	scanf("%d", &max);
	for (i=1; i<=max; i++)
	{
		for (j=1; j<=max; j++)
		{
			if(i==1||j==1||i==max||j==max||j+i==max+1||i==j)
			{
				printf("* ");
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
}
