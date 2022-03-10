#include "libft.h"

static int	ft_isspace(const char *s)
{
	int	i;

	i = 0;
	while (s[i] == '\t' || s[i] == '\v' || s[i] == '\f' || s[i] == '\r'
		   || s[i] == '\n' || s[i] == ' ')
		i++;
	return (i);
}

static int	ft_number(const char *s, int i, int z)
{
	long long	res;

	res = 0;
	while (s[i] >= '0' && s[i] <= '9')
	{
		res = (res * 10) + (s[i++] - '0');
		if (res > 2147483647 && (z == 1))
			return (-1);
		if (res > 2147483648 && (z == -1))
			return (0);
	}
	return ((int)(res * z));
}

int	ft_atoi(const char *s)
{
	int	i;
	int	z;
	int	res;

	i = 0;
	z = 1;
	res = 0;
	i = ft_isspace(s);
	if (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
			z *= -1;
		i++;
	}
	res = ft_number(s, i, z);
	return (res);
}
