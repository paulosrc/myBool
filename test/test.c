#include <stdio.h>
#include <stddef.h>
#include "mybool.h"
#define TAM(x) (sizeof(x) / sizeof(x[0]))

typedef struct test {
    char test_name[100];
    bool test_value;
} Test;

void assert_test(Test T) {
    if (T.test_value) {
        printf("TEST PASSED:    %s\n", T.test_name);
    } else {
        printf("TEST FAILED:    %s\n", T.test_name);
    }
}

Test tests[] = 
{
    {"TEST BIT_NOT(false) \t\t==\t true",         (BIT_NOT(false) == true)},
    {"TEST BIT_NOT(true) \t\t==\t false",         (BIT_NOT(true) == false)},

    {"TEST BIT_AND(false, false) \t==\t false",   (BIT_AND(false, false) == false)},
    {"TEST BIT_AND(false, true) \t==\t false",    (BIT_AND(false, true) == false)},
    {"TEST BIT_AND(true, true) \t==\t true)",     (BIT_AND(true, true) == true)},
    
    {"TEST BIT_OR(false, false) \t==\t false",    (BIT_OR(false, false) == false)},
    {"TEST BIT_OR(false, true) \t==\t true",      (BIT_OR(false, true) == true)},
    {"TEST BIT_OR(true, true) \t==\t true",       (BIT_OR(true, true) == true)},
    
    {"TEST BIT_XOR(false, false) \t==\t false",   (BIT_XOR(false, false) == false)},
    {"TEST BIT_XOR(false, true) \t==\t true",     (BIT_XOR(false, false) == false)},
    {"TEST BIT_XOR(true, true) \t==\t false",     (BIT_XOR(false, false) == false)},
    
    {"TEST BIT_NAND(false, false) \t==\t true",   (BIT_NAND(false, false) == true)},
    {"TEST BIT_NAND(false, true) \t==\t true",    (BIT_NAND(false, true) == true)},
    {"TEST BIT_NAND(true, true) \t==\t false",    (BIT_NAND(true, true) == false)},
    
    {"TEST BIT_NOR(false, false) \t==\t true",    (BIT_NOR(false, false) == true)},
    {"TEST BIT_NOR(false, true) \t==\t false",    (BIT_NOR(false, true) == false)},
    {"TEST BIT_NOR(true, true) \t==\t false",     (BIT_NOR(true, true) == false)},
    
    {"TEST BIT_NXOR(false, false) \t==\t true",   (BIT_NXOR(false, false) == true)},
    {"TEST BIT_NXOR(false, true) \t==\t false",   (BIT_NXOR(false, true) == false)},
    {"TEST BIT_NXOR(true, true) \t==\t true",     (BIT_NXOR(true, true) == true)},

    {"TEST LOGIC_AND(false, false) \t==\t false", (LOGIC_AND(false, false) == false)},
    {"TEST LOGIC_AND(false, true) \t==\t false",  (LOGIC_AND(false, true) == false)},
    {"TEST LOGIC_AND(true, true) \t==\t true",    (LOGIC_AND(true, true) == true)},
    
    {"TEST LOGIC_OR(false, false) \t==\t false",  (LOGIC_OR(false, false) == false)},
    {"TEST LOGIC_OR(false, true) \t==\t true",    (LOGIC_OR(false, true) == true)},
    {"TEST LOGIC_OR(true, true) \t==\t true",     (LOGIC_OR(true, true) == true)},
};

int main() 
{

    size_t tests_size = TAM(tests);

    printf("RUNNING [%zu] TESTS:\n\n", tests_size);
    
    for (size_t i = 0; i < tests_size; i++) 
        assert_test(tests[i]);

    return 0;
}