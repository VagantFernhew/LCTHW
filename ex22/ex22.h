/**
 * @file ex22.h
 * @brief header file used in ex22_main.c
 *
 *  This header file defines functions and external variables which are used in ex22_main.c
 *
 * @date 18-08-2018
 *
 **/

#ifndef __ex22__h
#define __ex22__h

// makes THE_SIZE in ex22.c available to other .c files
extern int THE_SIZE;
// gets and sets an internal static variable in ex22.c
int get_age();
void set_age(int age);
// updates a static variable that’s inside update_ratio
double update_ratio(double ratio);
void print_size(); 

#endif