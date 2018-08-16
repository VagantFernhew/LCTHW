#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	long int test_no = 1L;

	printf("value of test_no = %ld, size of test_no = %d\n", test_no, sizeof( test_no ) );
	return 0;
}