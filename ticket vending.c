//ticket vendind machine..(By Kishore Kumar CSDA)
#include<stdio.h>
int main()
{
	int a,b;
	printf("User input amount : ");
	scanf("%d",&a);
	printf("\nNumber of tickets\t: ");
	scanf("%d",&b);
	if(a%5==0)
	{	
		if(a<b*5)
			printf("\nThe amount is not enough ");
		if(a>=b*5)
		{	printf("\nPrint the ticket ");
			if(a>b*5)
			printf("\nBalance amount : %d",a-(b*5));
		}
	}
	else
	{
		printf("\nInvalid amount");
	}
	return 0;
}
