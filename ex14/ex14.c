/**
 * @file ex14.c
 * @brief writing and using functions
 *
 * @date 12-08-2018
 **/

#include <stdio.h>
#include <ctype.h>

	// forward declaration
	int can_print_it( char ch);
	void print_letters( char arg[]);

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

int main(int argc, char  *argv[])
{
	print_arguments(argc, argv);
	return 0;
}