//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int nbr1;
	int nbr2;

	if (argc == 3)
	{
		if ((nbr1 = atoi(argv[1])) > 0 && (nbr2 = atoi(argv[2])) > 0)
		{
			while (nbr1 != nbr2)
			{
				if (nbr1 > nbr2)
					nbr1 -= nbr2;
				else
					nbr2 -= nbr1;
			}
			printf("%d", nbr1);
		}
	}
	printf("\n");
	return (0);
}

//

#include <stdio.h>
#include <stdlib.h>

void pgcd(int nb1, int nb2)
{
	int div;
	int pgcd;

	div = 1;
	if (nb1 <= 0 || nb2 <= 0)
		return ;
	while (div <= nb1 || div <= nb2)
	{
		if (nb1 % div == 0 & nb2 % div == 0)
			pgcd = div;
		div++;
	}
	printf("%d", pgcd);
}

int main(int argc, char **argv)
{
	if (argc == 3)
		pgcd(atoi(argv[1]), atoi(argv[2]));
	printf("\n");
	return (0);
}

// 
