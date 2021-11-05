

#include "tools.h"

void format_c(v_print *param,int *len)
{
	*len += ft_putchar(va_arg(param->args,int));
}
