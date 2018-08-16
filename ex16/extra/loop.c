#include <stdio.h>

int main(int argc, char const *argv[])
{
	unsigned short a = 0xFFFF;
	int i = 0, foo = 0, bar = 0;

	a = ~( a ^ ( a<<4 ) );

    while( i < 17 ) 
    {
       i++;
       foo += i;
    }

    for( i = 0; i < 17; i++ ) 
    {
        bar += i; 
     }

     printf("foo: %d,  bar: %d, a: %x\n", foo, bar, a );
	return 0;
}