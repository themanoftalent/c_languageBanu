#include<stdio.h>
#define name akif


int main()
{

char name[30];
int age;

printf("enter name:");
scanf("%s",&name);

printf("enter age:");
scanf("%d",&age);

if((strcmp(name,"akif")==0) &&(age==32))
{
	printf("this is true\n");
}
else
{
	printf("wrong");
}

return 0;	
	
	
	
	
}

