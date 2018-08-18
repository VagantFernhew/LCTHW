/**
 * @file ex22.h
 * @brief header file used in crack_ex22_main.c
 *
 *  This header file defines functions and external variables which are used in crack_ex22_main.c
 *
 * @date 18-08-2018
 *
 **/

#ifndef __ex22__h
#define __ex22__h

// makes THE_SIZE in ex22.c available to other .c files
extern int THE_SIZE;
// gets and sets an internal static variable in ex22.c
/******************** get_age() **************************/
/**
 * @brief gets an internal static variable in ex22.c
 *
 * This function gets a static internal variable in ex22.c
 *
 * @return an integer variable
 *
 **/
int get_age();

/******************** set_age() **************************/
/**
 * @brief set an internal static variable in ex22.c
 *
 * This function takes an integer va;ue as input and assign it to  
 * a static internal variable in ex22.c
 *
 * @param age: integer value 
 * @return void
 **/
void set_age(int age);

/******************** update_ratio_static() ***********************/
/**
* @brief updates a static variable that’s inside update_ratio_static()
*
* This function takes a double as input and update a local static 
* variable inside update_ratio_static() to this input. the function
*  returns the last value of local static variable as output
*
* @param ratio: a double data
* @return the last value of local variable ratio
*
**/
double update_ratio_static(double ratio);

/******************** update_ratio_static() ***********************/
/**
* @brief updates a local variable that’s inside update_ratio_noStatic()
*
* This function takes a double as input and update a local variable 
* inside update_ratio_noStatic() to this input. the function returns 
* the last value of local static  as output
*
* @param ratio: a double data
* @return the last value of local variable ratio
*
**/
double update_ratio_noStatic(double ratio);

/******************** print_size()  *************************/
/**
 * @brief prints value of an external variable which is in ex22.h
 * 
 * @return void
 *
 **/
void print_size();

/*******************  scope_demo() ********************/
/**
 * @brief demonstrate scope of a variable
 *
 * This function takes an integer as input and change and print it's
 * value at different levels inside scope_demo to demonstrate the 
 * input variable at different levels.
 * 
 * @param count: integer input
 * @return void
 *
 **/ 
void scope_demo(int count);

#endif