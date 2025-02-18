#include <stdio.h>
#include "../include/mybool.h"  // Inclui a biblioteca

int main() 
{
    bool a = true;
    bool b = false;

    printf("a AND b = %s\n", bool_to_string(logic_and(a, b)));  // Deve imprimir "false"
    printf("a OR b = %s\n", bool_to_string(logic_or(a, b)));    // Deve imprimir "true"
    printf("a XOR b = %s\n", bool_to_string(bit_xor(a, b)));    // Deve imprimir "true"
    printf("NOT a: %s\n", bool_to_string(logic_not(a)));        // Deve imprimir "false"

    return 0;
}