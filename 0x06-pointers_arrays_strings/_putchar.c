#include "main.h"
#include<unistd.h>

/**
 * _putchar.write the character c to stdout
 *@c : thecharacter to print
 */
int _putchar(char c)
{
	return(write(1,&c,1));
}
