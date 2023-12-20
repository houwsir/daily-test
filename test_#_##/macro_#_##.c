# include <stdio.h>
# include <limits.h>

#define A   2
#define TO_STRING(var)  (#var)      //转成字符串
#define CONNECT(a, b) (int)(a##e##b)    //将两个参数连接到一起

// 当#和##遇到宏时，不再展开，解决方案加一层中间层，将宏参数的宏展开即可。
#define _STR(a) (#a)
#define STR(a)  _STR(a)
#define _CONS(a, b) (int)(a##e##b)
#define CONS(a, b)  _CONS(a, b)

int main(void)
{
    printf("TO_STRING(INT_MAX):%s\n", TO_STRING(INT_MAX));
    // TO_STRING(INT_MAX):INT_MAX

    // printf("CONNECT(A, A)):%d\n", CONNECT(A, A));
    //error: ‘AeA’ undeclared 

    printf("STR(INT_MAX):%s\n", STR(INT_MAX));
    // STR(INT_MAX):0x7fffffff
    printf("CONS(A, A):%d\n", CONS(A, A));
    // CONS(A, A):200


    return 0;
}

// build:
// gcc tostr_connect.c -o tostr_connect