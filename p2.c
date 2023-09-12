#include "main.h"
/**
 * main- Print alphabet in lowercase followed by a newline
 * @print_alphabet: displays alphabet in lowercas
*/
void print_alphabet(void)
{
	char letter:

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);
	_putchar('\n');
}
