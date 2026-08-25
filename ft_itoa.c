#include "libft.h"

static int	gen_len(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*ptr;
	int		len;
	long	num;

	num = n;
	len = gen_len(n);
	ptr = (char *)malloc(sizeof(char) * (len + 1));
	if (!ptr)
		return (NULL);
	ptr[len] = '\0';
	if (n == 0)
		ptr[0] = '0';
	if (n < 0)
	{
		ptr[0] = '-';
		num = -num;
	}
	while (num > 0)
	{
		len--;
		ptr[len] = (num % 10) + '0';
		num /= 10;
	}
	return (ptr);
}
