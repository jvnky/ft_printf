
#ifndef TOOLS_H
# define TOOLS_H

#include <stdio.h>
#include <unistd.h>


typedef struct t_print
{
	va_list args;

}v_print;


int ft_putchar(char c);
void ft_putnbr(int n,int *len);
int ft_putstr(char *s);
int check_type(v_print *param,const char *str,int *i);
void format_c(v_print *param,int *len);
void format_nbr(v_print *param,int *len);
void format_str(v_print *param,int *len);

#endif
