#include <stdio.h>
#include <string.h>

int verif(char c)
{
	char *str;
	int i;
	int j;

	i = -1;
	j = 0;
	str = strdup("23456789TJDKA");
	while (str[j])
	{
		if (str[j] == c)
			return (1);
		j ++;
	}
	return (0);
}


int main(int ac, char **av)
{
	if (ac == 2)
	{
		int i;
		int hand;
		int ace;

		i = 0;
		hand = 0;
		ace = 0;
		while (av[1][i])
		{
			if (verif(av[1][i]) == 0)
			{
				printf("The cards: %c does not exist\n", av[1][i]);
				return (0);
			}
			i ++;
		}
		i = 0;
		while (av[1][i])
		{
			if (av[1][i] >= '2' && av[1][i] <= '9')
				hand += av[1][i] - 48;
			else if (av[1][i] == 'J' || av[1][i] == 'D' || av[1][i] == 'K' || av[1][i] == 'T')
				hand += 10;
			else if (av[1][i] == 'A')
				ace++;
			i++;
		}
		if (hand + 11 <= 21)
			hand += 11 + (ace - 1);
		else if (hand + 11 > 21)
			hand += ace;
		if (hand == 21)
			printf("Blackjack!\n");
		else if (hand)
			printf("%d\n", hand);
		return (0);
	}
	return (0);
}
