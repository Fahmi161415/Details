#include<stdio.h>  
struct emp_details
{
	int age, phoneno,salary, sl;
	char name[50];	
};
void main()
{
	int i;
    struct emp_details E[20]; 
    
    printf("Enter the employee details:\n");
    
    for (i=1 ; i<20+1 ;i++);
	{
        E[i].sl=i;
   	    printf("\nFor sl %d\n", E[i].sl);
 	    printf("Enter name:  ");
	    scanf("%s",&E[i].name);
	    printf("Enter age:  ");
	    scanf("%d",&E[i].age);
	    printf("Enter phone number:");
	    scanf("%d", &E[i].phoneno);
	    printf("Enter salary:  ");
	    scanf("%d", &E[i].salary);
	    printf("\n;");
	}
   printf("Displaying details of employee: \n\n");
   for(i=0;i<20;i++)
	{
		printf("\n Information for serial no %d:\n:", i+1);
		printf("Name: %s \n", E[i].name);
		printf("Age: %d \n", E[i].name);
		printf("Phone no: %d \n", E[i].phoneno);
		printf("Salary: %d \n", E[i].salary);
	}	
}
