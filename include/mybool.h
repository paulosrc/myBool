#ifndef MYBOOL_H
#define MYBOOL_H

#ifdef __cplusplus
extern "C" {
#endif

#ifdef bool
#undef bool
#endif

#ifdef true
#undef true
#endif

#ifdef false
#undef false
#endif

#ifdef String
#undef String
#endif

// Definições do tipo bool
typedef _Bool bool;

// Alias para char*
typedef char* String;

#define true  1
#define false 0

// Operações bit a bit inline
static inline bool bit_not(bool x)          { return ~x; }
static inline bool bit_and(bool x, bool y)  { return x & y; }
static inline bool bit_or(bool x, bool y)   { return x | y; }
static inline bool bit_xor(bool x, bool y)  { return x ^ y; }
static inline bool bit_nand(bool x, bool y) { return ~(x & y); }
static inline bool bit_nor(bool x, bool y)  { return ~(x | y); }
static inline bool bit_xnor(bool x, bool y) { return ~(x ^ y); }

// Operações lógicas inline
static inline bool logic_not(bool x)          { return !x; }
static inline bool logic_and(bool x, bool y)  { return x && y; }
static inline bool logic_or(bool x, bool y)   { return x || y; }
static inline bool logic_xor(bool x, bool y)  { return (logic_or(logic_and(x, logic_not(y)), logic_and(y, logic_not(x)))); }
static inline bool logic_nand(bool x, bool y) { return logic_not(logic_and(x, y)); }
static inline bool logic_nor(bool x, bool y)  { return logic_not(logic_or(x, y)); }
static inline bool logic_xnor(bool x, bool y) { return logic_not(logic_xor(x, y)); }

// Declarações de funções auxiliares
static inline bool is_true(bool x)  { return x == true; }
const String bool_to_string(bool value);

#ifdef __cplusplus
}
#endif

#endif // MYBOOL_H