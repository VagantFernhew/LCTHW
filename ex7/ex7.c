/**
 * @file ex7.c
 * @brief intro of c variables and typesw
 * 
 * @date Agust 04, 2018
 *
 **/

#include <stdio.h>

int main(int argc, char const *argv[])
{
	int distance = 100;
	float power = 3.453f;
	double super_power = 4785.9879;
	char initial = 'A';
	char first_name[] = "Zed";
	char last_name[] = "Shaw";

	printf("MilkyWay is %d miles away.\n", distance );
	printf("Space probe has %f levels of power.\n", power );
	printf("Alien have %f awesome super powers.\n", super_power );
	printf("I have an initial %c.\n", initial );
	printf("I have a first name %s.\n", first_name );
	printf("I have a last name %s.\n", last_name );
	printf("My whole name is %s %c %s\n", first_name, initial, last_name);

	int bugs = 100;
	double bug_rate = 1.2;
	
	printf("You have %d bugs at a bug rate of %f.\n", bugs, bug_rate );
    
    long universe_of_defects = 1L * 1024L * 1024L *1024L;
    printf("The entire universe has %ld bugs.\n", universe_of_defects );

    double expected_bugs = bugs * bug_rate;

    double part_of_universe = expected_bugs/universe_of_defects;
	
    printf("That is only %e portion of universe.\n", part_of_universe );
    
    char null_byte = '\0';
    int care_percentage = bugs *null_byte;
    printf("This means you should care about %d%%.\n", care_percentage );
 
    // print null_bytes to see its value
    printf("null_byte as a integer = %d \n", null_byte );
    printf("null_byte as a char = %c \n", null_byte );
    printf("null_byte as a string = %s\n", null_byte );
    
	return 0;
}