#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	size_t			j;
	char			*str;

	j = 0;
	i = start;
	if (!s)
		return (NULL);
	if (start >= (unsigned int)(ft_strlen(s)))
	{
		str = malloc(1);
		str[0] = '\0';
		return (str);
	}
	str = malloc(len + 1);
	if (!str || len < 0)
		return (NULL);
	while (s[i])
	{
		if (i >= start && j < len)
			str[j++] = s[i];
		i++;
	}
	str[j] = '\0';
	return (str);
}
