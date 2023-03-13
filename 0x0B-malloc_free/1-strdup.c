#include <stdio.h>
#include <stdlib.h>
/**
* _strdup - duplicates a string
* @str: String to be duplicated
* Return: Pointer to string to be duplicated
*/

char *_strdup(char *str)
{
	int i, len;
	char *dup;

	len = 0;
	if (str == NULL)
	return (NULL);
	while (str[len])
	len++;
	dup = malloc((len + 1) * sizeof(char));
	if (dup == 0)
	return (NULL);
	for (i = 0 ; i <= len ; i++)
	{
		dup[i] = str[i];
	}
	return (dup);
}
