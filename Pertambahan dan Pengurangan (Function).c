#include <stdio.h>
int hasiltambah(int x, int y, int z){
	int penjumlahan;
	penjumlahan = x+y+z;
	return penjumlahan;
}

int hasilkurang(int x, int y, int z){
	int pengurangan;
	pengurangan = x-y-z;
	return pengurangan;
}

int main(){
	int a, b, c, hasil;
	printf ("Masukkan Nilai A = ");
	scanf("%d", &a);
	printf ("Masukkan Nilai B = ");
	scanf("%d", &b);
	printf ("Masukkan Nilai C = ");
	scanf("%d", &c);
	
	hasil = hasiltambah(a,b,c);
	printf("Hasil Penjumlahan = %d\n", hasil);
	
	hasil = hasilkurang(a,b,c);
	printf("Hasil Pengurangan = %d", hasil);
}
