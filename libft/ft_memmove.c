void *ft_memmove(void *dest, const void *src, size_t n)
{
    char *d = dest;
    const char *s = src;

    // 检查源地址和目标地址是否相同，如果相同，直接返回目标地址
    if (dest == src)
        return dest;

    // 检查目标地址是否在源地址之前，如果是，则从后往前复制
    if (d < s || d >= (s + n))
    {
        while (n--)
        {
            *d++ = *s++;
        }
    }
    else // 目标地址在源地址之后，从后往前复制
    {
        d += n - 1;
        s += n - 1;
        while (n--)
        {
            *d-- = *s--;
        }
    }

    return dest;
}
