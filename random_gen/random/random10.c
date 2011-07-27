//random10.c
//random number generator between 0 - 10
//2011/07/21
#include <stdio.h> 
#include <stdlib.h> 
#include <time.h>
int main(void)
{
	int i;
	srand(time(NULL));
	printf("\nRandom Numbers:\n");
	for (i = 0; i < 10; i++)
		printf ("%d\t", rand()%10);
	printf ("\n");

	return(0);
}
/*
   OUTPUT
   ------
   paulson@paulson-Inspiron-1525:~/sam$ gcc random10.c -o random10
   paulson@paulson-Inspiron-1525:~/sam$ ./random10

   Random Numbers:
   1	6	4	2	3	2	9	5	2	1	
   paulson@paulson-Inspiron-1525:~/sam$ ./random10

   Random Numbers:
   3	7	0	1	8	2	3	4	6	5	
   paulson@paulson-Inspiron-1525:~/sam$ ./random10

   Random Numbers:
   1	8	6	5	8	0	7	1	2	0	
   paulson@paulson-Inspiron-1525:~/sam$ ./random10

   Random Numbers:
   8	6	8	2	8	1	7	0	4	3	
   paulson@paulson-Inspiron-1525:~/sam$ 
 */
