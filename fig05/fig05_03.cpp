/* Fig. 5.3: fig05_03.c
	Creating and using a prgrammer-defined function */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int square(int y); /* function prototype */

/* function main begins program excution */
int main(void) {

	int x; /* counter */

	/* loop 10 times and calculate and output square of x each time */
	for (x = 1; x <= 10; x++) {
		printf("%d", square(x));  /* function call */
	} /* end for */

	printf("\n"); 
	return 0; /* indicates successful termination */
} /* end main */

/* square function definition returns square of parameter */
int square(int y) { /* y is a copy of argument to function */

	return y * y; /* returns square of y as an int */
} /* end function square */