int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    // 比较两个字符串的前 n 个字符
    while (n--)
    {
        // 如果遇到不同的字符或者遇到了字符串结束标志，则返回它们的差值
        if (*s1 != *s2 || *s1 == '\0')
            return (unsigned char)*s1 - (unsigned char)*s2;

        // 继续比较下一个字符
        s1++;
        s2++;
    }

    // 如果前 n 个字符都相同，则返回0
    return 0;
}
