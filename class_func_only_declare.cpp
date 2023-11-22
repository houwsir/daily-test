#include <cstdlib>
#include <iostream>
#include <unistd.h>

class TEST{
public:
    int a = 1;
    int pri();
};

int main()
{
    TEST test;
    // test.pri();
    std::cout << test.a << std::endl;
}

// 验证结论：
// 测试类的成员函数只有声明没有具体定义的情况，类可以正常使用
// 当调用为定义的函数会在链接阶段报未定义引用