#include <iostream>

class base{
public:
    void base_func() const{
        std::cout << "base" << std::endl;
    }
};

class TEST/**/:public base{ 
public:
    void func() const{
        base::base_func();
        std::cout << "test" << std::endl;
    }
};

int main(){
    TEST k;
    k.func();
    return 0;
}

// 验证结论：
// 存在继承时：可以在父类直接调用子类调用子类方法
// 不存在继承时：不可以在父类直接调用子类调用子类方法，编译报错：
// test_class_func.cpp:13:25: error: cannot call member function ‘void base::base_func() const’ without object
//    13 |         base::base_func();

