/**
 * C语言不能传type作为参数
 *
 * #include <stdlib.h>
 *
 * void *
 * malloc(size_t size);
 *
 * 必须free原始malloc返回的地址 / NULL(即0)
 * free();
 * 有且仅能free一次
 *
 * int *p = NULL;
 *
 * 复制字符串
 * char *dst = (char *) malloc(strlen(src) + 1);
 * strcpy(dst, src);
 */