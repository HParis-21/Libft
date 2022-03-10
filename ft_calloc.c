#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void	*dst;
	size_t	total;

	total = num * size;
	dst = malloc(total);
	if (!dst)
		return (NULL);
	ft_bzero(dst, total);
	return (dst);
}
