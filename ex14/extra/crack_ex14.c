/**
 * @file ex14.c
 * @brief writing and using functions
 *
 * @date 12-08-2018
 *
 **/
/********** how to crack ****************
 • Remove the forward declarations to confuse the compiler and cause it
   to complain about can_print_it and print_letters.
 • When you call print_arguments inside main, try adding 1 to
   argc so that it goes past the end of the argv array.
 **/
#include <stdio.h>
#include <ctype.h>

#define SKIP

#ifdef SKIP
// forward declaration
int can_print_it( char ch);
void print_letters( char arg[]);
void print_arguments( char argc, char *argv[]);
#endif

int main(int argc, char  *argv[])
{
	print_arguments(argc +1, argv);
	return 0;
}/* end of main() */

void print_arguments( char argc, char *argv[])
	{
		int i;

		for ( i = 0; i < argc; i++)
		{
			print_letters(argv[i]);
		}
	}

void print_letters(char arg[])
	{
		int i;

		for ( i = 0; arg[i] != 0; i++)
		{
			char ch = arg[i];

			if(can_print_it(ch))
			{
				printf("%c == %d\n", ch, ch);
			}
		}
		printf("\n");
	}

int can_print_it(char ch)
	{
		return isalpha(ch)||isblank(ch);
	}

