void *ft_memcpy(void *dest, const void *src, size_t n)
{
    char *d = dest;
    const char *s = src;

    // 检查源地址和目标地址是否相同，如果相同，直接返回目标地址
    if (dest == src)
        return dest;

    // 从源地址复制到目标地址，以确保在重叠的情况下也能正确工作
    while (n--)
    {
        *d++ = *s++;
    }

    return dest;
}
