/**
 * @file crack_ex22_main.c
 * @brife The stack, scope and globals
 *
 * @date 18-08-2018
 *
 **/

#include "ex22.c"

const char *MY_NAME = "Zed A. Shaw";


int main(int argc, char const *argv[])
{
	// test out THE_AGE accessors
	log_info("My name: %s, age: %d", MY_NAME, get_age());

	set_age(100);
    
    log_info("My age is now: %d", get_age());

    // test out THE_SIZE extern
    log_info("THE_SIZE is: %d", THE_SIZE);
    print_size();

    THE_SIZE = 9;

    log_info("THE SIZE is now: %d", THE_SIZE);
	print_size();

	// test the ratio function static
	printf("\nTesting update_ratio_static():\n");
	log_info("Ratio at first (called with 2.0): %f", update_ratio_static(2.0));
	log_info("Ratio again (caled with 5.0) : %f", update_ratio_static(5.0));
	log_info("Ratio once more (caled with 10.0) : %f", update_ratio_static(10.0));
	log_info("Ratio at last call (caled with 15.0) : %f", update_ratio_static(15.0));
    
    // test the ratio function nostatic
    printf("\nTesting update_ratio_noStatic():\n");
	log_info("Ratio at first (called with 2.0): %f", update_ratio_noStatic(2.0));
	log_info("Ratio again (caled with 5.0) : %f", update_ratio_noStatic(5.0));
	log_info("Ratio once more (caled with 10.0) : %f", update_ratio_noStatic(10.0));
	log_info("Ratio at last call (caled with 15.0) : %f", update_ratio_noStatic(15.0));
	printf("\n");
	// test the scope demo
	int count = 4;

	scope_demo(count);
	scope_demo(count * 20);

	log_info("count after calling scope_demo: %d", count);

	return 0;
}/** end of main() **/

