#include "shell.h"

/**
  * _puts - prints a string
  * @str: the string
  *
  * Return: void
  */
void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != 0)
	{
		_putchar(*(str + i));
		i++;
	}
}
