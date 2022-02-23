#include <string.h>
#include <stdio.h>
#include "libft.h"
#include <ctype.h>
int	main()
{
	char 	c[] = "Hello";
	char	c1[] = "World";
	size_t	i = -1;
	printf("%s\n",memmove(c,c1,5));
	printf("%s\n",ft_memmove(c,c1,5));
	printf("%zu",i);
}
