/*
Name	:	Hansen Henok Oktavianus Situmorang
Prodi	:	D3-TI 2
NIM		:	11318055
Program :	Static Ascending
*/

#include <stdio.h>
int main (){
	int x, a[100]={20,124,6,1,6,23,5,314,55,4}, j, i;
	for(i=0; i<10; i++){
		for(j=i+1; j<10; j++){
			if(a[i]<a[j]){
				x = a[i];  
				a[i]=a[j];
				a[j] = x;
			}
		}
	}
	printf("Nilai Descending : ");
	for(i=0; i<10; i++)
		printf("\n%d", a[i]);
	
}
