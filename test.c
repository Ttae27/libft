#include <string.h>
#include <stdio.h>
#include "libft.h"
#include <ctype.h>
int	main()
{
	char 	c[] = "Hello";
	char	c1[] = "World";
	size_t	i = -1;
	printf("%s\n",ft_strjoin(c,c1));
	printf("%s\n",ft_strjoin(c1,c));
}
