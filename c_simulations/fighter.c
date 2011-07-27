//fighter.c
//simulation of pure pursuit problem
//to run this program : ./fighter
//date: 2011/07/16
#include<stdio.h>
#include<math.h>
int main()
{
	int t,i;
	float d;
	float xf[12],yf[12],xb[12],yb[12],vf;
	printf("\nSIMULATION OF PURE PURSUIT PROBLEM IN C\n\n");
	printf("Enter Target path, xb[t] & yb[t]:");
	for(i=0;i<12;i++)
		scanf("%f%f",&xb[i],&yb[i]);	
	printf("Enter Fighter's Initial path, xf[0] & yf[0]:");
	scanf("%f%f",&xf[0],&yf[0]);	
	printf("Enter Fighter velocity, vf:");
	scanf("%f",&vf);	
	for(t=0;t<12;t++)
	{
		d=sqrt(pow((yb[t]-yf[t]),2)+pow((xb[t]-xf[t]),2));
		if(d<10)
		{
			printf("\nCaught at %d mts and %f kms\n",t,d);
			break;
		}
		else
		{
			xf[t+1]=xf[t]+(vf*(xb[t]-xf[t])/d);
			yf[t+1]=yf[t]+(vf*(yb[t]-yf[t])/d);
		}

	}
	if(t>11)
		printf("Target Escaped\n");


	return(0);
}
/* 
   EXECUTION STEPS
   ---------------
   fighter.c -lm -o fighter
   ./fighter

   OUTPUT
   -------------
   CASE-1
   ------
   SIMULATION OF PURE PURSUIT PROBLEM IN C

   Enter Target path, xb[t] & yb[t]:80 0
   90 -2
   99 -5
   108 -9
   116 -15
   125 -18
   133 -23
   141 -29
   151 -28
   160 -25
   169 -21
   179 -20
   Enter Fighter's Initial path, xf[0] & yf[0]:0 50
   Enter Fighter velocity, vf:20

   Caught at 9 mts and 2.968953 kms

   CASE-2
   ------
   SIMULATION OF PURE PURSUIT PROBLEM IN C

   Enter Target path, xb[t] & yb[t]:80 0
   90 -2
   99 -5
   108 -9
   116 -15
   125 -18
   133 -23
   141 -29
   151 -28
   0 0
   0 0
   0 0
   Enter Fighter's Initial path, xf[0] & yf[0]:0 50
   Enter Fighter velocity, vf:20
   Target Escaped
 */
