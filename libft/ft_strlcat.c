size_t ft_strlen(const char *s)
{
    size_t len = 0;
    while (*s++)
        len++;
    return len;
}

size_t ft_strlcat(char *dest, const char *src, size_t size)
{
    size_t dest_len = ft_strlen(dest);
    size_t src_len = ft_strlen(src);
    size_t total_len = dest_len + src_len;

    // 如果目标缓冲区大小为0，或者目标缓冲区的长度已经超过了指定的大小，则直接返回所需的长度
    if (size == 0 || dest_len >= size)
        return total_len;

    // 计算可以追加到目标缓冲区的剩余空间大小
    size_t remaining_space = size - dest_len - 1;

    // 将源字符串追加到目标缓冲区的末尾，但不超过剩余空间大小
    size_t i;
    for (i = 0; i < remaining_space && src[i] != '\0'; i++)
    {
        dest[dest_len + i] = src[i];
    }

    // 确保目标缓冲区以空字符结尾
    dest[dest_len + i] = '\0';

    // 返回总的追加后的字符串长度
    return total_len;
}
