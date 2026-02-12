
// 

#include <stdlib.h>

int *ft_rrange(int start, int end)
{
	int *r;
	int len;

	len = (end >= start) ? end - start + 1 : start - end + 1;
	if (!(r = (int*) malloc(sizeof(int) * len)))
		return (NULL);
	while (len--)
		r[len] = (end >= start) ? start++ : start--;
	return (r);
}

//

#include <stdlib.h>

int *ft_rrange(int start, int end)
{
	int *rrange;
	int i;

	if (start > end)
		rrange = (int *)malloc(sizeof(int) * (start - end) + 1);
	else
		rrange = (int *)malloc(sizeof(int) * (end - start) + 1);
	i = 0;
	while (start != end)
	{
		rrange[i++] = end;
		end -= (start > end) ? -1 : 1;
	}
	rrange[i] = end;
	return (rrange);
}

// 

#include <stdlib.h>

int ft_abs(int i)
{
	if (i < 0)
		return (-i);
	return (i);
}

int *ft_range(int start, int end)
{
	int *tab;
	int i;

	i = 0;
	while ((start + i) <= end)
		i++;
	if (!(tab = (int *)malloc(sizeof(int) * i)))
		return (NULL);
	i = -1;
	while ((start + ++i) <= end)
		tab[i] = start + i;
	return (tab);
}

int *ft_rangei(int start, int end)
{
	int *tab;
	int i;

	i = 0;
	while((start + i) <= end)
		i++;
	if (!(tab = (int *)malloc(sizeof(int) * i)))
		return (NULL);
	i = -1;
	while ((end - ++i) >= start)
		tab[i] = end - i;
	return (tab);
}

int *ft_rrange(int start, int end)
{
	if (start < end)
		return (ft_rangei(start, end));
	return (ft_range(end, start));
}

// 

#include <stdlib.h>

int *ft_rrange(int start, int end)
{
	int *range;
	int i;
	int n;

	i = 0;
	if (start > end)
		return (ft_rrange(end, start));
	n = end - start + 1;
	range = (int *)malloc(sizeof(int) * n);
	if (range)
	{
		while (i < n)
		{
			range[i] = start;
			start++;
			i++;
		}
	}
	return (range);

//

#include <stdio.h>
int *ft_rrange(int start, int end);

int main(void)
{
	int i;
	int *prt;

	i = 0;
	prt = ft_rrange(1, 3);
	while(i <= 2)
	{
		printf("%d ", prt[i]);
		i++;
	}
	printf("\n");

	i = 0;
	prt = ft_rrange(-1, 2);
	while(i <= 3)
	{
		printf("%d ", prt[i]);
		i++;
	}
	printf("\n");

	i = 0;
	prt = ft_rrange(0, 0);
	while(i <= 0)
	{
		printf("%d ", prt[i]);
		i++;
	}
	printf("\n");

	i = 0;
	prt = ft_rrange(0, -3);
	while(i <= 3)
	{
		printf("%d ", prt[i]);
		i++;
	}
	printf("\n");

	return (0);
}

//

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	n;
	int	*s;

	n = max >= min ? max - min : min - max;
	if (!(s= (int *)malloc(sizeof(int) * (n))))
		return (NULL);
	while (max != min)
		*s++ = max > min ? min++ : min--;
	*s = min;
	return (s - n);
}

// 

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max);

void	ft_putchar(char c)
{
	write(1, &c, 1);
	return;
}

void ft_putnbr(int n)
{
	if (n > 2147483647 || n < -2147483648)
		return;
	if (n == -2147483648)
	{
		write(1, "-2147483648", 12);
		return;
	}
	if (n < 0)
	{
		n *= -1;
		ft_putchar('-');
	}
	if (n < 10)
	{
		ft_putchar(n + '0');
		return;
	}
	ft_putnbr(n / 10);
	ft_putchar((n % 10) + '0');
	return;
}

int	ft_atoi(char *str)
{
	int result;
	int sign;

	result = 0;
	sign = 1;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-')
		sign = -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + *str - '0';
		str++;
	}
	return (sign * result);
}

int	main(int ac, char **av)
{
	int	*s;
	int	n;
	int	min;
	int	max;

	if (ac != 3)
		return (0);
	min = ft_atoi(av[1]);
	max = ft_atoi(av[2]);
	n = max >= min ? max - min + 1 : min - max + 1;

	s = ft_range(min, max);
	while (*s && n--)
	{
		ft_putnbr(*s++);
		ft_putchar('\n');
	}
	return (1);
}