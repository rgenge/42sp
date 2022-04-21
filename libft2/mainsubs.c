#include <string.h>
#include <stdio.h>
#include "ft_split.c"
#include "ft_substr.c"
#include "ft_strlen.c"

int main(void)
{

	/* sguerra- */
	char * * tab = ft_split("  tripouille  42  ", ' ');
	char * splitme = strdup("Tripouille");
	tab = ft_split(splitme, ' ');
	/* 17 */ printf("%s %s",tab[0], "Tripouille");
	/* 18 */ printf("%s", tab[1]); // null

	splitme = strdup("Tripouille ");
	tab = ft_split(splitme, ' ');
	/* 20 */ printf("%s %s",tab[0], "Tripouille");
	/* 21 */ printf("%s %s",tab[1], "null");

	return (0);
}