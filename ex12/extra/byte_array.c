/**
 *
 * A string and an array of byte are same thing.
 **/

#include <stdio.h>

int main(int argc, char const *argv[])
{
	char name[] = "Azam";
	char name_b[] = "0987";

	printf("name: %s, name_b: %s\n", name, name_b);
	printf("size of name: %ld, size of name_b: %ld\n", sizeof(name), sizeof(name_b) );
	
	// change name_b to int and compile again
	return 0;
}