#include<stdio.h>
void main()
{
	int no,i,j;
	printf("enter the number");
	scanf("%d",&no);
	
	for(i=1;i<=no;i++)
	{
	    if(no%i==0)
	{
		int count=0;
		for(j=1;j<=i;j++)
		{
		  if(i%j==0)
		  count++;
		}
		if(count==2)
		printf(" the prime factors of the number is %d",i);
	}
    }
}
