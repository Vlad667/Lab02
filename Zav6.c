#include <stdio.h>
#include <stdlib.h>

int main()
{

	int vozrast, remainder;
	
	printf ("Vvedite vozrast = ");
	scanf ("%d", &vozrast);
	
	remainder = vozrast%10;
	
	if (remainder == 1){
	printf ("Vam %d god", vozrast);
	} else {
	if ((remainder >= 2) &&(remainder <= 4)){
	printf ("Vam %d goda", vozrast);
	} else {
	printf ("Vam %d let", vozrast);
	} 
	
	}
	system("pause");
	return 0;
}
 
