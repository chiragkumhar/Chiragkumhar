#include<stdio.h>
#include<string.h>
main()
{
	char username[20];
	char email[20];
	char password[20];
	char cpassword[20];
	
	printf("Enter your Username : ");
	gets(username);
	
	printf("Enter your Email : ");
	gets(email);
	
	printf("Enter your Password : ");
	gets(password);
	
	printf("Enter your Confirm Password : ");
	gets(cpassword);
	
	if(strcmp(password,cpassword)==0)
	{
		printf("\n Your Username is %s",username);
		printf("\n Your Email-id is %s",email);
		printf("\n Your password is %s",password);
		printf("\n Your Confirm Password is ",cpassword);
		printf("--------------------User Register Succesfullly-------------");
	}
	else
	{
		printf("Password and Cpassword both are int same ");
	}
	
}
