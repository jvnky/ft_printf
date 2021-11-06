

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
#include "../tools/tools.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int check_type(v_print *param,const char *str,int *i);
  
int	ft_printf(const char *str, ...);

#endif
