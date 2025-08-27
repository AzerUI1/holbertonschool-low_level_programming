#ifndef CALC_H
#define CALC_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct op - Struct for operators and function pointers
 * @op: Operator as string
 * @f: Pointer to function performing the operation
 */
typedef struct op
{
    char *op;
    int (*f)(int a, int b);
} op_t;

/* Function prototypes for the 5 operations */
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/* Function to select the operation */
int (*get_op_func(char *s))(int, int);

#endif /* CALC_H */

