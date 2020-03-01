#ifndef _HEADER_H_  // 标准头文件结构,防止头文件多次#include
#define _HEADER_H_

// 头文件是一个桥梁
// #include也是编译预处理指令,将文件包含的文本原封不动插入到#include所在的地方
// ""编译器先在当前目录找,没找到去指定目录
// <>只在指定目录找
// 定义和使用的地方都应该包含头文件
// 一般做法:
// 任何.c都应该有对应的同名.h,把所有对外公开的函数原型和全局变量的声明都放进去
// static 函数只能在所在编译单元使用的函数
// static 全局变量只能在所在单元使用的全局变量
double printf_and_return(double x);
// int i; 是变量的定义
// extern int i; 是变量的声明,不能初始化
// 声明是不会产生代码的东西
// 定义和全局变量是会产生代码的东西
extern int G;

#endif
