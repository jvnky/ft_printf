

#include "tools.h"

void format_nbr(v_print *param,int *len)
{
	ft_putnbr(va_arg(param->args,int),*&len);

}
