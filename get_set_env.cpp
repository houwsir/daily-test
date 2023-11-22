#include <cstdlib>
#include <iostream>
#include <unistd.h>

int main()
{
    if (const char* env_p = std::getenv("KKK")){
        std::cout << "(1) Get PATH is: " << env_p << '\n';
    }
        
	setenv("KKK", "1++", 1);
    if (const char* env_p = std::getenv("KKK"))
        std::cout << "(2) Get  PATH is: " << env_p << '\n';
    while(1){
        sleep(1);
    }
}

// 验证结论：
// 程序中可以获取系统环境的环境变量，当修改时，仅对当前程序生效，
// 不会改变系统的环境变量，无论系统环境中是否有这个变量
