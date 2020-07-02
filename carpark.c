#include<stdio.h>
#include<string.h>

int n,a[10]={0};
int signup();
int login();
struct car
{
	int m;
	char name[100];
	int pinnumber;
}s[10];
signup()
{	int k;
  int y;
  y:
	printf("WELCOME\n");
	printf("Enter Your Favoritre Number 1-10:\n");
	scanf("%d",&k);
	printf("Checking For Availability\n");
	if(a[k]==0)
	{
		printf("Available\n");
		a[k]=1;
		printf("Enter Your Details\n");
		printf("Enter Your Name\n");
		scanf("%s",s[k].name);
		printf("%s",s[k].name);
		printf("Enter Pincode\n");
		scanf("%d",&s[k].pinnumber);
		printf("Successfully Registered!");
		printf("Enter Option To Continue;\n");
	printf("1.SignUp\n2.Login\n");
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
	else
	{
		printf("Sorry Exist already\n");
		goto y;
	}
	
	
}
login()
{   char name1[1000];
int i,k;
	int passcode;
   printf("Welcome Bro!\n");
   k:
   printf("Please enter your name\n");
   scanf("%s",name1);
   for(i=1;i<=10;i++)
   {
   	  if(strcmp(s[i].name,name1)==0)
   	  {
  	   	printf("Enter your passcode!\n");
  	   	scanf("%d",&passcode);
  	   	if(s[i].pinnumber==passcode)
  	   	{
	   	  	printf("Success\n");
	   	  }
	   	  else
	   	  {
  	   		printf("Wrong Password\nTry Again\n");
  	   		  goto k;
  	   		
  	   	}
  	   	
  	   }
  	   
   }
	printf("Enter Option To Continue;\n");
	printf("1.SignUp\n2.Login\n");
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
int main()
{
	printf("Enter Option To Continue;\n");
	printf("1.SignUp\n2.Login\n");
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