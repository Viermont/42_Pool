#include <unistd.h>

int	main(int argc, char **argv)
{
	int		counter;
	char	temp;

	counter = 0;
	if (argc <= 1 || argc > 3)
		write(1, "Error\n", 6);
	else
		if (argc == 2)
		{
			while (*argv[1])
			{
				if (argv[1][counter] < '0' || argv[1][counter] > '9')
				{
					write(1, "Error\n", 6);				
					return(0);
				}
				else
				{
					write(1, "We love 42", 10);
					return(0);
				}
			counter++;
			}
		}
		else
			write(1, "other languajes not avaliable yet", 33); 
}
