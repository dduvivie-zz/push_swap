#include "push_swap.h"

/*
check:
1. the number of parameters
2. all arguments must be integer
3. nothing can be bigger than a integer
4. no duplicates
*/

//int is_number(char *arg)
//{
//	// check if all char in argv is num;
//}

void	check_argument(int argc, char **argv)
{
	int i;

	if (argc < 2)
		exit(0);
	i = 0;
	while (argv[i] != NULL)
	{
		ft_printf("%s\n", argv[i]);
		i++;
	}
	//i = ft_atoi(argv[1]);
}
