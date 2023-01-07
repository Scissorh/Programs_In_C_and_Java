#include<stdio.h>
#include<conio.h>
#include<string.h>
struct employee
{
	int id;
	char name[50];
	float salary;
}e1,e2;

int main()
{
	//store first employee information
	e1.id=101;
	strcpy(e1.name,"Sakib Chaudhary");
	e1.salary=34800;
	
	//store second employee information
	e2.id=102;
	strcpy(e2.name,"Javed");
	e2.salary=42000;
	
	//printing first employee information
	printf("employee 1 id:%d\n",e1.id);
	printf("employee 1 name:%d\n",e1.name);
	printf("employee 1 salary:%d\n",e1.salary);
	
		//printing first employee information
	printf("employee 2 id:%d\n",e2.id);
	printf("employee 2 name:%d\n",e2.name);
	printf("employee 2 salary:%d\n",e2.salary);
	return 0;
}
