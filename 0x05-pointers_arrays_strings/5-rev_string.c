#include "main.h"

/**
 * rev_string - main function to swqp
 *
 * @s: int var to be checked for tis length
 */

void rev_string(char *s)
{
	int i = 0;
	int rev_i = 0;
	char rev_i_strng;

	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	while (i > rev_i)
	{
		rev_i_strng = s[i];
		s[i] = s[rev_i];
		s[rev_i] = rev_i_strng;
		i--;
		rev_i++;
	}
}
