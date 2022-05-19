#include <bsd/string.h>
#include <stdio.h>
#include "libft.h"

int main()
{
		char* empty = (char*)"";
		printf("---%s---\n", strnstr(empty, "", -1));
		printf("---%s---\n", ft_strnstr(empty, "", -1));
		printf("---%s---\n", strnstr(empty, "", 0));
		printf("---%s---\n", ft_strnstr(empty, "", 0));
		return 0;
}
