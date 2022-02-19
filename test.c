#include <string.h>
#include <stdio.h>
#include "libft.h"
#include <ctype.h>
int	main()
{
	char 	c[] = "Hello";
	char	c1[] = "World";
	
	printf("%d\n",memcmp("Apple","apple",5));
	printf("%d",ft_memcmp("Apple","apple",5));
}
