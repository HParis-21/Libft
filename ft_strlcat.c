#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	len;

	j = 0;
	i = ft_strlen(dst);
	len = ft_strlen(src);
	if (size <= i)
		len += size;
	else
		len += i;
	if (i < (size - 1) && size > 0)
	{
		while (src[j] && j < (size - (len - ft_strlen(src)) - 1))
		{
			dst[i] = src[j];
			i++;
			j++;
		}
		dst[i] = '\0';
	}
	return (len);
}
