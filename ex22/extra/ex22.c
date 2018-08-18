/**
 * @file ex22.c
 * @brief function definitions used in crack_ex22_main.c
 *
 * @date 18-08-2018
 *
 **/

#include <stdio.h>
#include "ex22.h"
#include "dbg.h"

int THE_SIZE = 555;

static int THE_AGE = 37;

int get_age()
{
	return THE_AGE;
}

void set_age(int age)
{
	THE_AGE = age;
}

double update_ratio_static(double new_ratio)
{
    static double ratio = 1.0;

	double old_ratio = ratio;
	ratio = new_ratio;

	return old_ratio;
}

double update_ratio_noStatic(double new_ratio)
{
    double ratio = 1.0;

	double old_ratio = ratio;
	ratio = new_ratio;

	return old_ratio;
}

void print_size()
{
	log_info("I think size is: %d", THE_SIZE);
}

void scope_demo(int count)
{
	log_info("count is: %d", count);

	if( count > 10 )
	{
		int count = 100; // BAD! BUGS!

		log_info("count in this scope is %d", count);

	}

	log_info("count is at exit: %d", count);

	count = 3000;

	log_info("count after assign: %d", count);
}