

#include "tools.h"


void	format_u(v_print *param,int *len)
{
	ft_put_unbr(va_arg(param->args,unsigned int),*&len);
}
