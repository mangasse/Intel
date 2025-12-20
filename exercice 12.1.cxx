
#include <stdio.h>
#include <string.h>

void trierSansStrcmp(char *chaine1, char *chaine2)
{
	int i = 0;

	// Comparer caractère par caractère
	while (chaine1[i] != '\0' && chaine2[i] != '\0')
	{
		if (chaine1[i] < chaine2[i])
		{
			printf("%s\n%s\n", chaine1, chaine2);
			return;
		}
		else if (chaine1[i] > chaine2[i])
		{
			printf("%s\n%s\n", chaine2, chaine1);
			return;
		}
		i++;
	}

	// Si toutes les lettres communes sont égales, la plus courte vient en premier
	if (strlen(chaine1) <= strlen(chaine2))
	{
		printf("%s\n%s\n", chaine1, chaine2);
	}
	else
	{
		printf("%s\n%s\n", chaine2, chaine1);
	}
}