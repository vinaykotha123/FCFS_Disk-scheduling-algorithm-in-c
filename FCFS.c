
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
                                     
void program()
    {int choice,m,n,x,v,start,i,j,pos,min,a[15],count;
     count=0;
     system("cls");
     printf("\nEnter the number of cylinders :");
     scanf("%d",&m);
     printf("\nEnter the number of requests :");
     scanf("%d",&n);
     printf("\nEnter previous requesst position:");
     scanf("%d",&v);
     printf("\nEnter current position :");
     scanf("%d",&start);
     printf("\nEnter the request queue :");
     for(i=0;i<n;i++)
                     {scanf("%d",&a[i]);
                      if(a[i]>=m)
                                 {printf("\ninvalid input");
                                  scanf("%d",&a[i]);
                                  }
                      } 
     system("cls");
       printf("Data is recorded.............\n\nKindly select the option");
       printf("\n\nDISK SCHEDULING ALGORITHMS\n1. FCFS\n OR \nPRESS ANY KEY TO EXIT");
        printf("\nEnter choice :");
        scanf("%d",&choice);
        count=0;
        x=start;
     
        switch(choice)
                      {case 1:    system("cls");
					      printf("\t\t\t\t\t********WELCOME TO DISK SCHEDULING ALGORITHM OF FCFS**********\n\n");
                                           
                              printf("Scheduling services the request in the order that follows:\n%d\t",start);
                              for(i=0;i<n;i++)
                                              {
											  x-=a[i];
                                               if(x<0)
                                                      x=-x;
                                               count+=x;
                                               x=a[i];
                                               printf("%d\t",x);
                                               }
     

