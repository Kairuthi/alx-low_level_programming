#include <stdio.h>
/**
 * main - my entry point
 * Description: print single digits from 0 to 10
 * Return: 0
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		printf("%d", num);
	putchar('\n');

	return (0);
}
