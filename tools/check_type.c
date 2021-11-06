
#include "tools.h"
int check_type(v_print *param,const char *str,int *i)
{
	int len;

	len = 0;
	(*i)++;
	if (str[*i] == 'c')
		format_c(param,&len);
	if(str[*i] == 'd' || str[*i] == 'i')
		format_nbr(param,&len);
	if(str[*i] == 's')
		format_str(param,&len);
	if(str[*i] == 'u')
		format_u(param,&len);
	if(str[*i] == 'x' || str[*i] == 'X')
		format_x(param,str[*i],&len);
	if(str[*i] == '%')
		len += ft_putchar('%');
	if(str[*i] == 'p')
		format_p(param,&len);
	return(len);
}
