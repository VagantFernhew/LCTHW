/**
 * @file crack_ex12.c
 * @brief size and arrays
 *
 * @date 12-08-2018
 *
 **/
#include <stdio.h>

int main(int argc, char const *argv[])
{
	char full_name[] = { 'Z', 'e', 'd', ' ', 'A', '.', ' ', 'S', 'h', 'a', 'h' };
    int areas[] = { 10, 12, 13, 14, 20 };
    char name = "Zed" ;

    name[0] = 'S';

    printf("the size of an int is : %ld\n", sizeof(int) );
    printf("the size of areas (areas[]) : %ld\n", sizeof(areas));
    printf("the no of ints in areas : %ld\n", sizeof(areas)/sizeof(int) );

    printf("the first area is %d and 2nd area is %d\n", areas[10], areas[1] );

    printf("the size of char is : %ld\n", sizeof(char) );
    printf("the size of name (name[]): %ld\n", sizeof(name));
    printf("the number of char is : %ld\n", sizeof(name)/sizeof(char) );

    printf("the size of full_name: %ld\n", sizeof(full_name) );
    printf("number of char in full_name: %ld\n", sizeof(full_name)/sizeof(char) );

    printf("name: %s, full_name: %s\n", name, full_name );
	return 0;
}