#include <unistd.h>

int	ft_mini_atoi(char **argv);

int	main(int argc, char **argv)
{
	int		counter;
	int		result;
	char	temp;

	counter = 0;
	if (argc <= 1 || argc > 3)
		write(1, "Error\n", 6);
	else
	{
		if (argc == 2)
		{
			while (*argv[1])
			{
				if (argv[1][counter] < '0' || argv[1][counter] > '9')
				{
					write(1, "Error\n", 6);
					return (0);
				}
				else
				{
					write(1, "We love 42", 10);
					ft_mini_atoi(&argv[1]);
					return (0);
				}
				counter++;
			}
		}
		else
			write(1, "other languajes not avaliable yet", 33);
	}
}

int	ft_mini_atoi(char *argv[1])
{
	int	result;
	int	pos_counter;
	int num;

	result = 0;
	pos_counter = 0;
	while (*argv[1])
	{
		num = (argv[pos_counter] - '0');
		result = result + num;
		pos_counter++;
	}
	result = result / 10;
	write(1, &result, 9);
	return (result);
}
