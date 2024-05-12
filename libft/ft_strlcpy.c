size_t ft_strlen(const char *s)
{
    size_t len = 0;
    while (*s++)
        len++;
    return len;
}

size_t ft_strlcpy(char *dest, const char *src, size_t size)
{
    size_t src_len = ft_strlen(src);

    // 计算可复制到目标缓冲区的最大长度（包括空字符终止符）
    size_t copy_len = size > 0 ? size - 1 : 0;

    // 复制源字符串到目标缓冲区，但不超过最大长度
    size_t i;
    for (i = 0; i < copy_len && src[i] != '\0'; i++)
    {
        dest[i] = src[i];
    }

    // 在目标缓冲区的末尾添加空字符终止符
    dest[i] = '\0';

    // 返回源字符串的实际长度，不包括空字符终止符
    return src_len;
}
