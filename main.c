#include <stdio.h>

typedef _Bool bool;         // Definição do tipo bool

#define true  1             // Definição de true como 1
#define false 0             // Definição de false como 0
#define not !               // Substitui o operador bitwise ! por not
#define and &               // Substitui o operador bitwise & por and
#define or |                // Substitui o operador bitwise | por or
#define xor ^               // Substitui o operador bitwise ^ por xor
#define nand(A, B) !(A & B) // Substitui a operação bitwise NAND
#define nor(A, B) !(A | B)  // Substitui a operação bitwise NOR
#define nxor(A, B) !(A ^ B) // Substitui a operação bitwise NXOR

#define AND &&              // Substitui o operador lógico && por AND
#define OR ||               // Substitui o operador lógico || por OR

#define printb(A) (A == true ? printf("true\n") : printf("false\n")) // Macro "printb" para imprimir true/false diretamente no terminal

int main() {
    bool x = true;
    bool y = not x;

    printf("         valor de x: \t");
    printb(x);
    printf("         valor de y: \t");
    printb(y);

    bool x_and_y = x and y;
    bool x_or_y = x or y;
    bool x_xor_y = x xor y;

    printf(" valor de \"x and y\": \t");
    printb(x_and_y);
    printf("  valor de \"x or y\": \t");
    printb(x_or_y);
    printf(" valor de \"x xor y\": \t");
    printb(x_xor_y);

    bool x_nand_y = nand(x, y);
    bool x_nor_y = nor(x, y);
    bool x_nxor_y = nxor(x, y);

    printf("valor de \"x nand y\": \t");
    printb(x_nand_y);
    printf(" valor de \"x nor y\": \t");
    printb(x_nor_y);
    printf("valor de \"x nxor y\": \t");
    printb(x_nxor_y);

    return 0;
}