#include <string.h>
#include <stdio.h>
#include "libft.h"
#include <ctype.h>
int	main()
{
	char 	c[] = "Hello";
	char	c1[] = "World";
	
	printf("%s\n",strchr("Hello world", 'r'));
	printf("%s",ft_strchr("Hello world", 'l'));
}
