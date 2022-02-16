#include "libft.h"
#include <stdio.h>

int	main()
{
	//isalpha
	printf("%d\n",ft_isalpha('A'));
	printf("%d\n",ft_isalpha('5'));
	printf("--------------\n");
	//isdigit
	printf("%d\n",ft_isdigit('5'));
	printf("%d\n",ft_isdigit('A'));
	printf("--------------\n");
	//isalnum
	printf("%d %d\n",ft_isalnum('a'), ft_isalnum('5'));
	printf("%d\n",ft_isalnum('@'));
	printf("--------------\n");
	//isascii
	printf("%d\n",ft_isascii('A'));
	printf("%d\n",ft_isascii(500));
	printf("--------------\n");
}
