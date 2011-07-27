//pseudorandom10.c
//pseudo-random number generator between 0 - 10
//2011/07/21
#include <stdio.h> 
#include <stdlib.h> 
int main(void)
{
	int i;
	printf("\nRandom Numbers:\n");
	for (i = 0; i < 10; i++)
		printf ("%d\t", rand()%10);
	printf ("\n");

	return(0);
}
/*
   OUTPUT
   ------
   paulson@paulson-Inspiron-1525:~/sam$ gcc pseudorandom10.c -o pseudorandom10
   paulson@paulson-Inspiron-1525:~/sam$ ./pseudorandom10

   Random Numbers:
   3	6	7	5	3	5	6	2	9	1	
   paulson@paulson-Inspiron-1525:~/sam$ ./pseudorandom10

   Random Numbers:
   3	6	7	5	3	5	6	2	9	1	
   paulson@paulson-Inspiron-1525:~/sam$ ./pseudorandom10

   Random Numbers:
   3	6	7	5	3	5	6	2	9	1	
   paulson@paulson-Inspiron-1525:~/sam$ ./pseudorandom10

   Random Numbers:
   3	6	7	5	3	5	6	2	9	1	
   paulson@paulson-Inspiron-1525:~/sam$ 
 */
