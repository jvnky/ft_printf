

#include "tools.h"


void	convertp(unsigned long n,int *len)
{
	char * base;

	base = "0123456789abcdef";
	if (n > 15)
	{
		convertp(n / 16, *&len);
		convertp(n % 16, *&len);
	}
	else
		*len += ft_putchar(base[n]);
}


void format_p(v_print *param,int *len)
{
	unsigned long n;

	n = va_arg(param->args,unsigned long);
	if (n ==0)
		*len += ft_putstr("(nil)");
	else
	{
		*len += ft_putstr("0x");
		convertp(n,*&len);
	}

}
