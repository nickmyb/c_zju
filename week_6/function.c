/**
 *  调用函数时给的值与参数的类型不匹配是C语言传统上最大的漏洞
 *  编译器会自动进行类型转换但可能这不是我们所需要的，后续的C++/Java在这方面很严格
 *
 *  int f();
 *  这样的函数申明代表函数参数未知
 *
 *  int f(void);
 *  代表函数没有参数
 */