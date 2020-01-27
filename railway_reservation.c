#include<stdio.h>
#include<string.h>
int arr[100],d;
int g[100]={0};
struct reservation
{
	int unique_id;
	
	char name[1000];
	int phone;
	char password[1000]; 
	int no,seat;
}a[1000];
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
  	arr[a[k].seat]=0;}
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
login()
{  int m,n,d;
	char si[100],y[100];
	d:printf("LOGIN\n");
	printf("Enter your Unique id\n");
	scanf("%d",&m);
	if(g[m]==1)
	{
	printf("Enter a username\n");
	scanf("%s",&si);
	printf("Enter a password\n");
	scanf("%s",&y);
	if(strcmp(si,a[m].name)==0&&strcmp(y,a[m].password)==0)
	{
		printf("Login success\n");
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
	else
	{
		printf("username password not available\n");
		goto d;
	}}
	else 
	{
		printf("Please recheck your unique id\n");
		goto d;
	}
	
}
signup()
{
	int i,j,u,n,e;
	e:
	printf("signup\n");
	printf("Enter a unique value for you\n");
	scanf("%d",&u);
	if(g[u]!=1)
	{
	g[u]=1;
	printf("Enter your name\n");
	scanf("%s",&a[u].name);
	
	printf("Enter your password\n");
	scanf("%s",&a[u].password);
	printf("Enter your phone number");
	scanf("%d",&a[u].phone);
	printf("success!");	
	printf("Choose the option\n");
	printf("1.login\n2.Exit3.signup\n");
	scanf("%d",&n);
	switch(n)
	{
		case 1:
		login();
		break;
		case 2:
		quit();
		break;
		case 3:
		signup();
		break;
	
	}
	}
	else
	{
		printf("Unique id already present\n");
		goto e;
	}
}
int main()
{   int n,d;

	printf("Choose the option\n");
	printf("1.signup\n2.login\n");
	scanf("%d",&n);
	switch(n)
	{
		case 1:
		signup();
		break;
		case 2:
		login();
		break;
	}
}