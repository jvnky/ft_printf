


#include "ft_printf.h"


int	ft_printf(const char *str, ...)
{
	va_list param;
	
	char c;
	c = 0;
  	
	if (str == NULL)
		return (0);
	
	va_start(param,str);		
	printf("---%s\n",str);	
	printf("Letter ---\n");	
	while(str[c] != '\0')
	{
		
//	printf("%c",str[c]);	
		if(str[c]!= '%')
			ft_putchar(str[c]);

	c++;	
	}	   
	printf("\n");	
	va_end(param);
	return (0);
}
