//

#include <unistd.h>

int	 main(int argc, char const *argv[])
{
	int i;
	int flg;

	if (argc == 2)
	{
		i = 0;
		while (argv[1][i] == ' ' || argv[1][i] == '\t')
			i += 1;
		while (argv[1][i])
		{
			if (argv[1][i] == ' ' || argv[1][i] == '\t')
				flg = 1;
			if (!(argv[1][i] == ' ' || argv[1][i] == '\t'))
			{
				if (flg)
					write(1, " ", 1);
				flg = 0;
				write(1, &argv[1][i], 1);
			}
			i += 1;
		}
	}
	write(1, "\n", 1);
	return (0);
}

//

#include <unistd.h>

void my_putchar(char c)
{
	write(1, &c, 1);
}

void epur_str(char *str)
{
	char sp;
	int i;

	sp = -1;
	i = 0;
	while(str[i])
	{
		if (str[i] != ' ' && str[i] != '\t')
		{
			if (sp == 1)
				my_putchar(' ');
			sp = 0;
			my_putchar(str[i]);
		}
		else if (sp == 0)
			sp = 1;
		i++;
	}
}

int main(int argc, char **argv)
{
	if (argc == 2)
		epur_str(argv[1]);
	my_putchar('\n');
	return (0);
}

// 

#include <unistd.h>

int main(int argc, char const *argv[])
{
    int i;
    int flag;

    if (argc == 2)
    {
        i = 0;
        while (argv[1][i] == ' ' || argv[1][i] == '\t')
            i++;
        while (argv[1][i])
        {
            if (argv[1][i] == ' ' || argv[1][i] == '\t')
                flag = 1;
            if (!(argv[1][i] == ' ' || argv[1][i] == '\t'))
            {
                if (flag)
                    write(1, "   ", 3);
                flag = 0;
                write(1, &argv[1][i], 1);
            }
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}

// 