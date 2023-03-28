#include "main.h"

/**
 * get_size - Calculates the size to cast the argument
<<<<<<< HEAD
 * @format: Formatted string in which to print the argument
=======
 * @format: Formatted string in which to print the arguments
>>>>>>> e67b9f244da8654bffd6fed71efc4eeb7a29ed0c
 * @i: List of arguments to be printed.
 *
 * Return: Precision.
 */
int get_size(const char *format, int *i)
{
	int curr_i = *i + 1;
	int size = 0;

	if (format[curr_i] == 'l')
		size = S_LONG;
	else if (format[curr_i] == 'h')
		size = S_SHORT;

	if (size == 0)
		*i = curr_i - 1;
	else
		*i = curr_i;

	return (size);
}
<<<<<<< HEAD

=======
>>>>>>> e67b9f244da8654bffd6fed71efc4eeb7a29ed0c
