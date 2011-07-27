//pseudorandom.c
//pseudo-random number generator
//2011/07/21
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i;
	printf("\nRandom Numbers:\n");
	for(i=0;i<10;i++)
		printf("%d\t",rand());
	printf("\n");
}
/*
   OUTPUT
   ------
   paulson@paulson-Inspiron-1525:~/sam$ gcc pseudorandom.c -o pseudorandom
   paulson@paulson-Inspiron-1525:~/sam$ ./pseudorandom

   Random Numbers:
   1804289383	846930886	1681692777	1714636915	1957747793	424238335	719885386	1649760492	596516649	1189641421	
   paulson@paulson-Inspiron-1525:~/sam$ ./pseudorandom

   Random Numbers:
   1804289383	846930886	1681692777	1714636915	1957747793	424238335	719885386	1649760492	596516649	1189641421	
   paulson@paulson-Inspiron-1525:~/sam$ ./pseudorandom

   Random Numbers:
   1804289383	846930886	1681692777	1714636915	1957747793	424238335	719885386	1649760492	596516649	1189641421	
   paulson@paulson-Inspiron-1525:~/sam$ 
 */

