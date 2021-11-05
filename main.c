

#include "src/ft_printf.h"

int 	main(int argc, char **argv)
{
	int h;
	int trueprint;
	int mprint;
	char *s = "fuck you dude";
	char *o = "mais ca marche pas";
	char c = 'i';
	char a = 'E';
	h =42;
	mprint =ft_printf("My print| %c %s %d %i |\n",c,s,h,h);
	printf("----------\n");
	trueprint =printf("True print| %c %c |\n",c,a);

	
	printf("My print ret : %d || print ret : %d",mprint,trueprint);
	
	return(0);

}
