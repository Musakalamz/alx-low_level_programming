#ifndef CALC_H
#define CALC_H

/*
 * File: calc.h
 * Auth: Musa_kalamz A Ogunsolu
 * Desc: Header file containing all the function prototypes
 *	 and data structures used by the 3-main.c progra
 */

/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
    char *op;
    int (*f)(int a, int b);
} op_t;

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);

#endif
