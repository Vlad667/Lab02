#include <stdio.h>
#include <stdlib.h>
int max (float x, float y)

{
    if (x > y) {

    return x;

    } else {
	
    return y;
    
    }

}

int main ()

{

    int x, y, z;
    
    printf ("Vvedite x: ");
    scanf ("%d", &x);
    
    printf ("\nVvedite y: ");
    scanf ("%d", &y);
   
    z = max(x, y);

    printf("Max: %d", z);

system("pause");
    return 0; 

}
