
#include<stdio.h>

void password();
void program();
int a;
void main()
{
	password();
	if(a==1)
	{
		program();
	}
}

void password()
{
	int i=0;
	char ch;
	char user[6],password[6];
	char u[]="vinay",p[]="vinay";
	printf("enter your user name\n");
	gets(user);
	printf("enter your password\n");
	while(1)
	{
		if(i==5)
		break;
		ch=getch();
		password[i++]=ch;
		ch='*';
		putch(ch);
	}
	password[i]='\0';
	if(strcmp(user,u)==0 && strcmp(password,p)==0)
	{
		a=1;
	}
	else
	{
		printf("\nlogin unsucessfull \n please enter the valid username and password");
	}
}
                                     

