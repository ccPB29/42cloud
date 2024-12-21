#include <stdio.h>  // 使用标准 printf 进行对比
#include "ft_printf.h"

int main() {
    // 测试字符
    ft_printf("Custom: Character: %c\n", 'A');
    printf("Standard: Character: %c\n", 'A');

    // 测试字符串
    ft_printf("Custom: String: %s\n", "Hello, World!");
    printf("Standard: String: %s\n", "Hello, World!");

    // 测试指针
    int x = 42;
    ft_printf("Custom: Pointer: %p\n", &x);
    printf("Standard: Pointer: %p\n", &x);

    // 测试整数 (包括正数和负数)
    ft_printf("Custom: Integer: %d\n", 12345);
    printf("Standard: Integer: %d\n", 12345);
    ft_printf("Custom: Negative Integer: %d\n", -54321);
    printf("Standard: Negative Integer: %d\n", -54321);

    // 测试无符号整数
    ft_printf("Custom: Unsigned Integer: %u\n", 3000000000U);
    printf("Standard: Unsigned Integer: %u\n", 3000000000U);

    // 测试十六进制
    ft_printf("Custom: Hexadecimal (lowercase): %x\n", 255);
    printf("Standard: Hexadecimal (lowercase): %x\n", 255);
    ft_printf("Custom: Hexadecimal (uppercase): %X\n", 255);
    printf("Standard: Hexadecimal (uppercase): %X\n", 255);

    // 测试百分号
    ft_printf("Custom: Percent: %%\n");
    printf("Standard: Percent: %%\n");

    return 0;
}