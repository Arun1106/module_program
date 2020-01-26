#include<stdio.h>;
int arr[100],d;
struct reservation
{
	int unique_id;
	
	int no,seat;
}a[100];
booking()
{  int i,c,j,k=0,n;
    arr[100]='0';
	printf("registration\n");
	printf("Enter your unique id");
	scanf("%d",&a[k].unique_id);
	printf("No of tickets you need to book\n");
	scanf("%d",&a[k].no);
	printf("Enter seat no");
	for(i=0;i<a[k].no;i++)
	  
	{	
	c:
	scanf("%d",&a[k].seat);
	   if(arr[a[k].seat]!=1){
		arr[a[k].seat]=1;
	   }
	   else
	   {
   		printf("Seat is already booked\nplease enter another seat no\n");
   		goto c;
	   }
	}
	printf("%d seats are successfully booked\n",a[k].no);
	for(j=1;j<=100;j++)
{ 	if(arr[j]==1)
	{printf("%d\n",j);
	}
}
printf("above seats are booked successfully\n");
goto d;
d:
printf("Choose the option\n");
	printf("1.booking\n2.Cancel\n3.Exit\n");
	scanf("%d",&n);
	switch(n)
	{
		case 1:
		booking();
		break;
		case 2:
		cancel();
		break;
		case 3:
		quit();
		break;
	}

}
quit()
{
	printf("Thank you!visit again\n");
}
cancel()
{ int i,j,k=0,d,n;
  printf("Enter the no of seat you want to cancel\n");
  scanf("%d",&a[k].no);
  for(i=0;i<a[k].no;i++)
  {
  	printf("Enter seat no you want to cancel\n");
  	scanf("%d",&a[k].seat);
  	if(arr[a[k].seat]==1){
  	arr[a[k].seat]=0;
	  }
  		printf("Your seat is cancelled successfully\n");
  }
  goto d;
d:
printf("Choose the option\n");
	printf("1.booking\n2.Cancel\n3.Exit\n");
	scanf("%d",&n);
	switch(n)
	{
		case 1:
		booking();
		break;
		case 2:
		cancel();
		break;
		case 3:
		quit();
		break;
	}
  
	
}
int main()
{   int n;

	printf("Choose the option\n");
	printf("1.booking\n2.Cancel\n3.Exit\n");
	scanf("%d",&n);
	switch(n)
	{
		case 1:
		booking();
		break;
		case 2:
		cancel();
		break;
		case 3:
		quit();
		break;
	}
}