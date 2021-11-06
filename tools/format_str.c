
#include "tools.h"

void	format_str(v_print *param,int *len)
{
	*len += ft_putstr(va_arg(param->args, char *));	
}
