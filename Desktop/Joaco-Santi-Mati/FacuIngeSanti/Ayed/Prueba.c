#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "Fracciones.h"

int main() {
    
    Fraction* pepe1=fraction_new(1,7);
    Fraction* pepe2=fraction_new(1,2);
    Fraction* pepon=fraction_add(pepe1,pepe2);
    Fraction* pepin=fraction_sub(pepe1,pepe2);



    fraction_print(pepon);
    fraction_print(pepin);
    
    return 0;
}
  