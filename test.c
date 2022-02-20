#include <string.h>
#include <stdio.h>
#include "libft.h"
#include <ctype.h>
int	main()
{
	char 	c[] = "Hello";
	char	c1[] = "World";
	
	printf("%s\n",strnstr("Apple ap  apple","apple",20));
	printf("%s",ft_strnstr("Apple ap apple","apple",20));
}
