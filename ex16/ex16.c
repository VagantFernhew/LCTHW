/**
 * @file ex16.c
 * @brief structs and pointers to them
 *
 * @date 13-08-2018
 *
 **/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>


struct person{
	char *name;
	int age;
	int height;
	int weight;
};

struct person *person_create( char *name, int age, int height, int weight)
	{
		struct  person *who = malloc(sizeof(struct person));
		assert(who != NULL);

		who->name = name;
		who->age = age;
		who->height = height;
		who->weight = weight;

		return who;
	}

void person_destroy(struct person *who)
	{
		assert(who != NULL);
		//free(who->name);
		free(who);

	}

void person_print(struct person *who)
	{
		printf("name: %s\n", who->name );
		printf("age: %d\n", who->age );
		printf("height: %d\n", who->height );
		printf("weight: %d\n", who->weight );
	}
int main(int argc, char const *argv[])
{
	// make two people structures
	struct person *Joe = person_create("Joe Alex", 25, 140, 64);
	struct person *Jhon = person_create("Jhon Vick", 45, 134, 58);

	// print them out and where they are in memory location
	printf("Joe is at memory location: %p\n", Joe );
	person_print(Joe);

	printf("Jhon is at memory location: %p\n", Jhon );
	person_print(Jhon);
	 // make everyone 20 years age and print them again
	Joe->age += 20;
	Joe->height += 10;
	Joe->weight -= 5;
	person_print(Joe);

	Jhon->age += 8;
	Jhon->height -9;
	person_print(Jhon);

	// destroy them both to clean
	person_destroy(Joe);
	person_destroy(Jhon);
	return 0;
}