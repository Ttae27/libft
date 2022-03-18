#include <string.h>
#include <stdio.h>
#include "libft.h"
#include <ctype.h>
int	main()
{
	char 	c[] = "Hello";
	char	c1[] = "World";
	size_t	i = -1;
	printf("%s\n",ft_substr(c1,0,4));
	printf("%s\n",ft_substr(c1,2,5));
}
