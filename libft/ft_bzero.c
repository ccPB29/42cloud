void ft_bzero(void *s, size_t n)
{
    char *ptr = (char *)s;
    
    // 指针前进 n 个字节，每个字节设置为0
    while (n--)
    {
        *ptr++ = '\0';
    }
}