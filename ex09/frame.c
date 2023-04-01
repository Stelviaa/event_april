#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
	if (ac != 1)
	{
		char **str;
		char *av_dup;
		char *tmp;
		int	max;
		int i;
		int j;
		int k;
		int nbr_word;



		k = 1;
		while (k < ac)
		{
			while (av[k][0] == '\0')
				k ++;
			i = 0;
			j = 0;
			max = 0;
			av_dup = strdup(av[k]);
			tmp = strtok(av_dup, " \t\n\v\f\r");
			nbr_word = 0;
			while (tmp)
			{
				if (strlen(tmp) > max)
					max = strlen(tmp);
				tmp = strtok(NULL," \t\n\v\f\r");
				nbr_word ++;
			}
			tmp = strtok(av[k], " \t\n\v\f\r");
			while (j++ < max + 4)
				printf("*");
			while(tmp)
			{
				j = printf("\n* %s", tmp);
				j -= 1;
				while (j <= max + 2)
				{
					printf(" ");
					j ++;
				}
				printf("*");
				tmp = strtok(NULL," \t\n\v\f\r");
				i ++;
			}
			j = 0;
			printf("\n");
			while (j++ < max + 4)
				printf("*");
			printf("\n");
			k ++;
		}
	}
	return (0);
}
