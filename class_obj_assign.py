#! /usr/bin/python

class child:
    d = 3
    e = 4
    f = 5
    def __init__(self):
        self.c = 10

class parrent:
    a = 0
    b = 1
    c = 2
    k = child()
    def __init__(self):
        self.p = 10



p = parrent()
print(p.a, p.b, p.c, p.p)
print(p.k.d, p.k.e, p.k.f, p.k.c)

p1 = p
print(id(p), id(p1))

k1 = p.k
print(id(p.k), id(k1))

k1.d = 30
k1.e = 40
k1.f = 50
k1.c = 100
print(p.k.d, p.k.e, p.k.f, p.k.c)

# 验证结论：
# k1与p.k都指向同一个对象，当对k1赋值，p.k也同时改变
# python中参数的传递既不是值传递，也不是引用传递，而是赋值传递，或者叫对象的引用传递
# 这里的赋值或对象的引用传递，不是指向一个具体的内存地址，而是指向一个具体的对象
# 1、如果对象是可变的，当其改变时，所有指向这个对象的变量都会改变
# 2、如果对象不可变，简单的赋值只能改变其中一个变量的值，其余变量则不受影响


