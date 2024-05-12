int ft_tolower(int c)
{
    if (c >= 'A' && c <= 'Z')
    {
        // 将大写字母转换为小写字母
        return c + ('a' - 'A');
    }
    else
    {
        // 如果不是大写字母，则返回原字符
        return c;
    }
}
