//random.c
//random number generator
//2011/07/21
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int i;
	srand(time(NULL));
	printf("\nRandom Numbers:\n");
	for(i=0;i<10;i++)
		printf("%d\t",rand());
	printf("\n");
}
/*
   OUTPUT
   ------
   paulson@paulson-Inspiron-1525:~/sam$ gcc random.c -o random
   paulson@paulson-Inspiron-1525:~/sam$ ./random 

   Random Numbers:
   211592774	1302372630	1312225842	920908609	842053726	2041829061	905739826	242517630	1598095816	1087614261	
   paulson@paulson-Inspiron-1525:~/sam$ ./random 

   Random Numbers:
   687667675	2012861594	478751687	161194417	1644343155	1933209413	1398310084	1523711675	782348953	1470443229	
   paulson@paulson-Inspiron-1525:~/sam$ ./random 

   Random Numbers:
   374476302	1813352828	1114326458	1911443673	414003661	1316300129	12905784	1066188634	343672108	1636251247	
   paulson@paulson-Inspiron-1525:~/sam$ 

 */

