#include <stdio.h>
#include <stdlib.h>
# define PI 3.1415926535897

# ifdef PI
# define area(r) (PI * r * r)
# else
# define area(r) (3.14159 * r * r)
# endif


/**
 * Compiladores 2025-2
 * unjordi
 * 
 */
int main (void){
    printf("hola mundo! \n");
    float mi_area = area(3);
    printf("Resultado : %f\n",mi_area);
    return 0;
}