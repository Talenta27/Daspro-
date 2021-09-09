#include <stdio.h>
int main (){
	double a,b,TOTAL;
	char c;
	scanf("%s %lf %lf",&c,&a,&b);
	TOTAL=a+b*.15;
	printf("TOTAL = R$ %.2lf\n",TOTAL);
	return 0;
}
