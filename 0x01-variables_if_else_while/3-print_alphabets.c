#include <stdio.h>

/*
 * main -Entry point 
 *
 * Description: print alphabet in lowercase then in uppercase 
 *
 * Return: Always 0 (Success) 
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}	
