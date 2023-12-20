# include <stdio.h>

#define __ANONYMOUS_1(type, name, line)   type name ## _ ## line
#define _ANONYMOUS_0(type, line)   __ANONYMOUS_1(type, _anonymous, line)
#define ANONYMOUS(type) _ANONYMOUS_0(type, __LINE__)

typedef struct {
    int a;
    int b;
}T_test;

int foo(int a1, T_test t1){
    printf("int a1:%d\n", a1);
    printf("struct t1.a:%d\n", t1.a);
}

int main(void)
{
    ANONYMOUS(int);
    _anonymous_19 = 0;
    printf("int anonymous:%d\n", _anonymous_19);

    ANONYMOUS(T_test);
    _anonymous_23.a = 1;
    printf("struct anonymous:%d\n", _anonymous_23.a);

    // foo(ANONYMOUS(int), ANONYMOUS(T_test)); // error

    return 0;
}

// build:
// gcc anonynous.c -o anony
