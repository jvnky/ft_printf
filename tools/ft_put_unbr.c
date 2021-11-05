
#include "tools.h"


void	ft_put_unbr(unsigned int n, int *len)
{
	long b;

	b = n;
	if (b > 9)
	{
		ft_put_unbr(b / 10,*&len);
		ft_put_unbr(b % 10,*&len);
	}
	else
		*len += ft_putchar (b + '0');

}
