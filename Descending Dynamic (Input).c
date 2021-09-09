
#include <stdio.h>
int main (){
	int n, i, x, a[50], j;
	printf("Masukkan Batas yang ingin dimasukkan : ");
		scanf("%d", &n);
	
	for(i=0; i<n; i++){
		printf("Masukkan nilai yang ke-%d : ", i+1);
		scanf("%d", &a[i]);}
		
	printf("\tNilai Yang diberikan adalah :");
	for (i=0; i<n; i++)
		printf("\n\t%d", a[i]);
		
	for(i=0; i<n; i++){
		for(j=i+1; j<n; j++){
			if(a[i]<a[j]){
				x = a[i];
				a[i]=a[j];
				a[j] = x;
			}
		}
	}
	printf("\n\t\tNilai Descending : ");
	for(i=0; i<n; i++)
		printf("\n\t\t%d", a[i]);

	
}
