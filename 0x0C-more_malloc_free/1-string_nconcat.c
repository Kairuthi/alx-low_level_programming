#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strlen - find length of a string
 * @s: string
 * Return: int
 */
unsigned int _strlen(char *s)
{
	unsigned int size = 0;

	for (; s[size] != '\0'; size++)
	;
	return (size);
}
/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes to copy from s2
 * Return: pointer to the array initialized or NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	char *m;
	unsigned int size1, size2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	size1 = _strlen(s1);
	size2 = _strlen(s2);
	if (n < size2)
		m = malloc(size1 + n * sizeof(char) + 1);
	else
		m = malloc(size1 + size2 + 1);
	if (m == 0)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		m[i] = s1[i];
	for (j = 0; s2[j] != '\0' && j < n; i++, j++)
		m[i] = s2[j];
	m[i] = '\0';
	return (m);
}
