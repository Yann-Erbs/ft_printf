#include "../include/ft_printf.h"

int main(void)
{
	char *c = "comment ca va";
	char *e = " le sang";

	ft_printf("FT_PRINTF : salut %s%s\n", c, e);
	printf("PRINTF : salut %s%s\n", c, e);
	return (0);
}
