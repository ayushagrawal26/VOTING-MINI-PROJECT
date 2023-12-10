#include<stdio.h>
#include<conio.h>
#include<math.h>


int main()
{
	int a,f;
	char p[50];
	printf("enter total number of voters : \n");
	scanf("%d",&f);
	for(int i=1;i<=f;i++)
	{
	
	printf("Enter your name : \n");
	scanf("%s",p);
	printf("enter 1 for male and 2 for female : \n");
	scanf("%d",&a);
	if(a==1)
	{
		printf("Thank You For voting Mr.%s\n",p);
	}
	else if(a==2)
	{
		printf("Thnak You for voting Mrs.%s\n",p);
	}
	else
	{
		printf("Enter the number correctly\n");
		break ;
	}
	
	int b;
	printf("\nEnter birth year : \n");
	scanf("%d",&b);
	int c=2023-b;
	if(c>=18)
	{
		printf(" you are eligible for voting\n");
	}
	else
	{
		printf("You are not eligible for voting\n");
		break ;
	}
	
	int e,flag=0,temp=0,mu=0;
	printf("\nCandidates\n1)BSP\n2)BJP\n3)SP\n");
	scanf("%d",&e);
	if(e==1)
	{
		printf("You have voted to BSP\n");
		flag++;
	}
	else if(e==2)
	{
		printf("You have voted BJP\n");
	    flag++;
	}
	else if(e==3)
	{
		printf("You have voted SP\n");
		flag++;
	}

	
}
	return 0;
}
