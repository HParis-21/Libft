#include "libft.h"

static int	ft_len (int n)
{
	int	len;

	len = 0;
	if (n < 0)
	{
		len++;
	}
	if (n == 0)
		return (1);
	while (n)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		i;
	char	*str;

	i = ft_len(n);
	str = malloc(i + 1);
	if (!str)
		return (NULL);
	str[i--] = '\0';
	if (n == 0)
		str[0] = '0';
	if (n < 0)
		str[0] = '-';
	while (i)
	{
		if (n < 0)
			str[i] = -(n % 10) + '0';
		else
			str[i] = (n % 10) + '0';
		n /= 10;
		i--;
	}
	if (n > 0)
		str[i] = n + '0';
	return (str);
}
