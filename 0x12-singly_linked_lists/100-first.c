#include <stdio.h>
/**
 * 100-first.c
 *
 * Tortoise words
 *
 */
void b_main(void) __attribute__ ((constructor));

/**
 * b_main- executess befor main
 *
 */

void b_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
