/* Fig. 4.9 : fig04_09.c
   Using the dp/while repetition statement */
#include <stdio.h>

/* function main begins program execution */
int main(void)
{
	int counter = 1; /* initialize counter */

	do {
		printf("%d ", counter); /* display counter */
	} while (++counter <= 10); /* end do...while */

	return 0; /* indicate program ended successfully*/
} /* end function main */
