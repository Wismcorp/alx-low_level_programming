#include "main"

/**
 *_islower - checks if a character is lower
 *@c: the character
 *Return:  1 if letter is lowercase, 0 if not
 */
int _islower(int c)
{
	if (c >= 'a' && <= 'z')
		return (1);
	else
		return (0);

}
 
