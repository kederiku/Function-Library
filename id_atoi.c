int	id_atoi(char* str)
{
	int	number = 0;
	char*	str2 = str;

	if (str)
	{
		while (str2 >= str && *str2 <= '9' && *str2 >= '0')
		{
			number = number * 10 + (*str2 - '0');
			str2 = str2 + 1;
		}
	}
	return number;
}
