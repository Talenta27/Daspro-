
#include <stdio.h>
int main (){
	int x, a[10]={3,13,2,8,7,5,16,6,4,10}, j, i;
	
	
	for(i=0; i<10; i++){
		for(j=i+1; j<10; j++){
			if(a[i]>a[j]){
				x = a[i];  
				a[i]=a[j];
				a[j] = x;
			}
		}	
	}
	
	printf("Nilai Ascending : ");
	for(i=0; i<10; i++){
		printf("\n%d", a[i]);
	}
}





	

