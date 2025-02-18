#include "../include/mybool.h"

const String bool_to_string(bool value) 
{
    return (is_true(value) ? "true" : "false");
}