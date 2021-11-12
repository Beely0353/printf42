#include "ft_printf.h"
#include <limits.h>

int main()
{
	printf("trc :%d \n",printf(" NULL %s NULL ", NULL));
	printf("ftc :%d \n",ft_printf(" NULL %s NULL ", NULL));
}
