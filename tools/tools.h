
#ifndef TOOLS_H
# define TOOLS_H

#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
typedef struct t_print
{
	va_list args;

}v_print;

int	ft_putchar(char c);
void	ft_putnbr(int n,int *len);
int	ft_putstr(char *s);
int	check_type(v_print *param,const char *str,int *i);
void	format_c(v_print *param,int *len);
void	format_nbr(v_print *param,int *len);
void	format_str(v_print *param,int *len);
void	format_u(v_print *param,int *len);
void	ft_put_unbr(unsigned int n,int *len);
void	ft_convert(unsigned int n,char type,int *len);
void	format_x(v_print *param,char str,int *len);
void	format_p(v_print *param, int *len);
void	convertp(unsigned long n, int *len);


#endif
