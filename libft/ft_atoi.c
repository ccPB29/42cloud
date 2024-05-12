int ft_atoi(const char *str)
{
    int sign = 1;
    int result = 0;
    int i = 0;

    // 跳过空白字符
    while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
        i++;

    // 处理正负号
    if (str[i] == '-' || str[i] == '+') {
        if (str[i] == '-')
            sign = -1;
        i++;
    }

    // 将数字字符转换为整数
    while (str[i] >= '0' && str[i] <= '9') {
        result = result * 10 + (str[i] - '0');
        i++;
    }

    // 返回结果
    return sign * result;
}