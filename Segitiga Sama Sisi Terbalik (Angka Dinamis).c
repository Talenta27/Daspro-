#include <stdio.h>
int main(){
	int baris, angka, jumlah, spasi, max;
	printf("Masukkan Panjang Segitiga angka : ");
	scanf("%d", &max);
	for (baris=1; baris<=max; baris++)
	{
		for(spasi=1; spasi<=baris; spasi++)
		{
			printf(" ");
		}
		for(angka=spasi; angka<=max; angka++)
		{
			printf("%d", baris);
		}
		for(jumlah=spasi; jumlah<=angka; jumlah++)
		{
			printf("%d", baris);
		}
		printf("\n");
	}
}
