


#include "tools.h"


int	ft_putstr(char *s)
{
	int i;

	i = 0;
	if(!s)
		s = "(null)";
	while(s[i])
	{

		ft_putchar(s[i]);
		i++;
	}
	return(i);
}
