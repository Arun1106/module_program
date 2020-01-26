#include<stdio.h>
int first=5,second=5,third=5;
struct reservation
{
	int phonenumber;
	int ticketnumber;
	char name[10];
	char address[100];
}a;
booking()
{
	printf("enter your details\n");
	printf("name:\n");
	scanf("%s",a.name);
	printf("Phone number:\n");
	scanf("%d",&a.phonenumber);
	printf("Enter address:\n");
	scanf("%s",a.address);
	printf("Choose seat from 1-10\n");
	scanf("%d",&a.ticketnumber);
	if(a.t)
	
}
availability()
{   int s;
	printf("Availability checking\n");
	printf("Enter Option Below\n");
	printf("1.FIRST CLASS\n2.SECOND CLASS\n3.THIRD CLASS\n");
	scanf("%d",&s);
	switch(s)
	{
		case 1:
		if(first>0)
		{
			printf("Available\n");
			first--;
		}
		else
		{
			printf("Not available\n");
		}
		break;
		case 2:
		if(second>0)
		{
			printf("Available\n");
			second--;
		}
		else
		{
			printf("Not available\n");
		}
		break;
		case 3:
		if(third>0)
		{
			printf("Available\n");
			second--;
		}
		else
		{
			printf("Not available\n");
		}
		break;
		default:
		break;
		
	}
	
	
}
cancellation()
{
	int d;
	printf("Cancelling\n");
	printf("Enter Option Below\n");
	printf("1.FIRST CLASS\n2.SECOND CLASS\n3.THIRD CLASS\n");
	scanf("%d",&d);
	switch(d)
	{
		case 1:
		first++;
		break;
		case 2:
		second++;
		break;
		case 3:
		third++;
		break;
		
	}
	printf("SUCCESSFULLY CANCELLED");
	
}
int main()
{
	int n;
	printf("\nARUN RAILWAYS\n");
	printf("Enter Option Below\n");
	printf("1.booking\n2.cancel\n3.availability\n");
	scanf("%d",&n);
	switch(n)
	{
		case 1:booking();
		break;
		case 2:cancellation();
		break;
		case 3:availability();
		break;
	}
}