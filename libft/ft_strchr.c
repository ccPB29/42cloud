char *ft_strchr(const char *s, int c)
{
    while (*s != '\0')
    {
        if (*s == (char)c)
        {
            return (char *)s;
        }
        s++;
    }

    // 如果未找到字符 c，则返回空指针
    return NULL;
}
