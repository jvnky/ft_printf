
#include "tools.h"

void	ft_convert(unsigned int n,char type,int *len)
{
	char *base;

	if (type == 'X')
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	if (n > 15)
	{
		ft_convert(n / 16,type,*&len);
		ft_convert(n % 16,type,*&len);
	}
	else
		*len += ft_putchar(base[n]);
}

void format_x(v_print *param,char str, int *len)
{
	unsigned int number;

	number = va_arg(param->args,unsigned int);
	ft_convert(number,str,*&len);
}
