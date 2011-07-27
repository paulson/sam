//inventory.c
//simulation of inventory problem
//to run this program : ./inventory
//date: 2011/07/20
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int p,q,s,es,ud,dd,dem,i;
	printf("\nEnter p and q:");
	scanf("%d%d",&p,&q);
	float c=0.0;
	ud=0;
	dd=0;
	s=115;
	for(i=1;i<=180;i++)
	{
		if(dd==i)
		{
			s+=q;
			ud=0;
		}
		dem=rand()%100;
		if(dem<=s)
		{
			s-=dem;
			c+=(float)s*0.75;
		}
		else
		{
			c+=((float)dem-(float)s)*18.0;
			s=0;
		}
		es=s+ud;
		if(es<=p)
		{
			ud=q;
			dd=i+3;
			c+=75.0;
		}
	}
	printf("\nReorder Point,P:%d units\nReorder Quantity, Q:%d units\nCurrent Stock, S:%d units\nTotal Cost, C:Rs.%f\n",p,q,s,c);
	return(0);
}
/*
   EXECUTION STEPS
   ---------------
   gcc inventory.c -o inventory
   ./inventory

   OUTPUT
   ------
   Enter p and q:125 150

   Reorder Point,P:125 units
   Reorder Quantity, Q:150 units
   Current Stock, S:114 units
   Total Cost, C:Rs.36240.750000
   paulson@paulson-Inspiron-1525:~/sam$ ./inventory 

   Enter p and q:125 250

   Reorder Point,P:125 units
   Reorder Quantity, Q:250 units
   Current Stock, S:0 units
   Total Cost, C:Rs.35313.750000
   paulson@paulson-Inspiron-1525:~/sam$ ./inventory 

   Enter p and q:150 250

   Reorder Point,P:150 units
   Reorder Quantity, Q:250 units
   Current Stock, S:222 units
   Total Cost, C:Rs.28962.750000
   paulson@paulson-Inspiron-1525:~/sam$ ./inventory 

   Enter p and q:175 250

   Reorder Point,P:175 units
   Reorder Quantity, Q:250 units
   Current Stock, S:38 units
   Total Cost, C:Rs.28601.250000
   paulson@paulson-Inspiron-1525:~/sam$ ./inventory 

   Enter p and q:175 300

   Reorder Point,P:175 units
   Reorder Quantity, Q:300 units
   Current Stock, S:234 units
   Total Cost, C:Rs.30545.250000

 */
