#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*dst_ch;
	const unsigned char	*src_ch;
	size_t	i;

	if (!dst && !src)
		return (NULL);
	dst_ch = (unsigned char *)dst;
	src_ch = (const unsigned char *)src;
	if (dst_ch > src_ch)
	{
		while (n > 0)
		{
			n--;
			dst_ch[n] = src_ch[n];
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			dst_ch[i] = src_ch[i];
			i++;
		}
	}
	return (dst);
}
