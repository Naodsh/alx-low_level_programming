#include "main.h"
/**
 * set_string - Sets the value of a pointer to a char.
 *
 * @s: Pointer to the pointer that will be updated.
 * @to: Pointer to the string whose address will be stored in @s.
 */
void set_string(char **s, char *to)
{
	if (s == NULL)
		return;

	*s = to;
}
