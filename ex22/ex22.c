/**
 * @file ex22.c
 * @brief function definitions used in ex22_main.c
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

double update_ratio(double new_ratio)
{
	static double ratio = 1.0;

	double old_ratio = ratio;
	ratio = new_ratio;

	return old_ratio;
}

void print_size()
{
	log_info("I think size is: %d", THE_SIZE);
}