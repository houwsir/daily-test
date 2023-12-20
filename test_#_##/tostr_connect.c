# include <stdio.h>

#define TO_STRING(var)  (#var)      //转成字符串
#define STR_CONNECT(a, b) (a##b)    //将两个参数连接到一起

int main(void)
{
    printf("TO_STRING(abcd):%s\n", TO_STRING(abcd));
    char aaa[] = "test.";
    printf("TO_STRING(aaa):%s\n", TO_STRING(aaa));
    printf("STR_CONNECT(abc, def):%s\n", STR_CONNECT(a, aa));
    return 0;
}

// build:
// gcc macro_#_##.c -o macro_#_##