#include <stdio.h>
#include <stdlib.h>
/**
* str_concat - concatenates 2 strings
* @s1: first string
* @s2: second string
* Return: Null on failure
* Pointer to new string if success
*/

char *str_concat(char *s1, char *s2)
{
	char *s12;
	int i, j, ii, ij;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = 0;
	while (s1[i])
	i++;
	j = 0;
	while (s2[j])
	j++;
	s12 = malloc((i + j + 1) * sizeof(char));
	if (s12 == 0)
		return (NULL);
	for (ii = 0 ; ii < i  ; ii++)
	{
		s12[ii] = s1[ii];
	}
	for (ij = 0 ; ij <= j ; ij++)
	{
		s12[ij + i] = s2[ij];
	}
	return (s12);
}
