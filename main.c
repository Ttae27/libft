#include "libft.h"
#include <stdio.h>

int	main()
{
	//isalpha
	printf("%d\n",ft_isalpha('A'));
	printf("%d\n",ft_isalpha('5'));
	printf("--------------");
	//isdigit
	printf("%d\n",ft_isdigit('5'));
	printf("%d\n",ft_isdigit('A'));
	printf("--------------");
	//isalnum
	printf("%d %d\n",ft_isalnum('a'), ft_isalnum('5'));
	printf("%d\n",ft_isalnum('@'));
	printf("--------------");
	//isascii
	printf("%d\n",ft_isascii('A'));
	printf("%d\n",ft_isascii(500));
	printf("--------------");
}
