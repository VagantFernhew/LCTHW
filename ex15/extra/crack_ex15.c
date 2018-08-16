/**
 * @file crack_ex15.c
 * @brief pointers, dreaded pointers
 *
 * @date 12-08-2018
 *
 **/
/********************* key points ************************
  type *ptr A pointer of type named ptr
  *ptr The value of whatever ptr is pointed at
  *(ptr + i) The value of (whatever ptr is pointed at plus i)
  &thing The address of thing
  type *ptr = &thing A pointer of type named ptr set to the address
  of thing
  ptr++ Increment where ptr points
**/

/*************** how to crack ********************
 * Print cur_age, ages and (cur_age - ages) how their subtraction works?

 **/

#include <stdio.h>

int main(int argc, char const *argv[])
{
	// create two arrays we care about
	int ages[] = {23, 41, 13, 6, 70, 9};
	char *names[] = {"Jhon", "Asad", "Adam", "Sid", "Asra", "Nida"};

	// safely gt the size of age
	int count = sizeof(ages)/sizeof(int);
	int i;

	// first way using indexing
	for ( i = 0; i < count; i++)
	{
		printf("%s has %d years alive.\n", names[i], ages[i] );
	}
	printf("-  -  -  -\n");

	// setup pointers to the start of the array
	int *cur_age = ages;
	char **cur_name = names;

	// second way using pointers
	for ( i = 0; i < count; i++)
	{
	 	printf("age of %s is %d years.\n", *(cur_name + i), *(cur_age + i) );
	}
	printf("-  -  -  -\n");

	// third way, pointer are just arrays
	for( i = 0; i < count; i++)
	{
		printf("%s is %d years old.\n", cur_name[i], cur_age[i] );
	}     
	printf("-  -  -  -\n");

	// fourth way, with pointers in a stupid and complex way
    for ( cur_age = ages, cur_name = names; (cur_age - ages) < count; cur_age++, cur_name++)
    {
    	printf("%s live %d years so far.\n", *cur_name, *cur_age );
    	printf("diff : %ld, cur_age: %ld, ages: %ld\n", (cur_age - ages), cur_age, ages );
    }
    printf("-  -  -  -\n");
    
    // pointers are not arrays
    printf("size of data in ages: %ld\n", sizeof(ages[0]) );
    printf("size of cur_age: %ld\n", sizeof(cur_age) );
	return 0;
}