/**
* @file crack_ex13.c
* @brief for-loops and arrays of strings
*
* @date 12-08-2018
*
**/

#include <stdio.h>

int main(int argc, char const *argv[])
{
	int i;

	// abort the program when user provides no argument
	if ( argc != 2 )
	{
		printf("Erorr: you need one argument.\n");
		return 1;
	}

    printf("Contents of argv are:\n");
	for (i = 0; i < argc; i++)
	{
		printf("argv[%d]: %s\n", i, argv[i] );
	}
	
	for (i = 0; argv[1][i] != '\0'; i++)
	{
		char letter = argv[1][i];

		switch(letter)
		{
			case 'a':
			case 'A':
			    printf("%d: 'A'\n", i );
			    break;
			case 'e':
			case 'E':
			    printf("%d: 'E'\n", i );
			    break;
			case 'i':
			case 'I':
			    printf("%d: 'I'\n", i );
			    break;
			case 'o':
			case 'O':    
			    printf("%d: 'O'\n", i );
			    break;
			case 'u':
			case 'U':
			    printf("%d: 'U'\n", i );
			    break;
			case 'y':
			case 'Y':
			    if( i > 2 )
			    {
			    	// its only sometimes Y.
			    	printf("%d: 'Y'\n", i );
			    }
			    break;
			default:
			    printf("%d : %c is not a vowel.\n", i, letter );


		}
	}
	return 0;
}