int ft_toupper(int c)
{
    if (c >= 'a' && c <= 'z')
    {
        // 将小写字母转换为大写字母
        return c - ('a' - 'A');
    }
    else
    {
        // 如果不是小写字母，则返回原字符
        return c;
    }
}
