


#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	int i;  		
	int len ;
	v_print *param;
	


	param = (v_print *)malloc(1*sizeof(v_print));	
	if (!param)
		return (0);
	i = 0;
	len = 0;
	va_start(param->args,str);
	
	while(str[i])
	{
		
		if (str[i] =='%')
			len = len + check_type(param,str,&i);
		else
			len = len + ft_putchar(str[i]);	
		i++;
	}


	free(param);
	va_end(param->args);
	return (len);
}
