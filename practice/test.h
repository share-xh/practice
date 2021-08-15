
#pragma once
#ifndef    __TEST__HEAD__
#define   __TEST__HEAD__

extern int  a;//变量的声明
int sum(int a, int  b);//函数的声明
int b = 400;//尽量不要在头文件中定义变量

//内联函数
inline  void f(int& a)
{
	a += 100;
}

#endif
