#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
int x,n=365,v=366;
	printf("Vvedite god = ");
	scanf("%d", &x);
	if (x%400==0) {
	printf("V etom gody (%d) dney \n",n);
	} else {
	if (x%100==0) {
	printf("V etom gody (%d) dney \n",n);
	} else {
	if (x%4==0) {
	printf("V etom gody (%d) dney \n",v);
	} else {
	printf("V etom gody (%d) dney \n",n);
	}
	}
	}
    system("pause");
	return 0;
}
