typedef _Bool bool; // Definição do tipo bool

#define  true 1     // Definição de true como 1
#define false 0     // Definição de false como 0

#define   BIT_NOT(x)       ~(x)            // Operação bitwise NOT
#define   BIT_AND(x, y)    ((x) & (y))     // Operação bitwise AND
#define    BIT_OR(x, y)    ((x) | (y))     // Operação bitwise OR
#define   BIT_XOR(x, y)    ((x) ^ (y))     // Operação bitwise XOR
#define  BIT_NAND(x, y)    !((x) & (y))    // Operação bitwise NAND
#define   BIT_NOR(x, y)    !((x) | (y))    // Operação bitwise NOR
#define  BIT_NXOR(x, y)    !((x) ^ (y))    // Operação bitwise NXOR

#define LOGIC_NOT(x)       (!x)            // Operação lógica NOT
#define LOGIC_AND(x, y)    ((x) && (y))    // Operação lógica AND
#define  LOGIC_OR(x, y)    ((x) || (y))    // Operação lógica OR

#define BOOL_TO_STRING(value) (value != 0 ? "true" : "false"); // Transforma o valor bool para string para imprimir no terminal
