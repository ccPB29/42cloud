char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    if (*needle == '\0')
        return (char *)haystack;

    size_t needle_len = 0;
    while (needle[needle_len] != '\0')
        needle_len++;

    while (*haystack != '\0' && len >= needle_len)
    {
        if (*haystack == *needle && strncmp(haystack, needle, needle_len) == 0)
            return (char *)haystack;
        haystack++;
        len--;
    }

    return NULL;
}
