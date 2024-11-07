//program to program a structure
/*
Author: Nkonge william mutethia
Reg No: CT101/G/22542/24
Date : 7/11/2024
*/
#include<stdio.h>
#include<string.h>
//Define the structure
struct Employee {
	char name [25];
	int ID;
	char department [20];
	float salary;
	char Email [50];
} Employee;
int main (){
  strcpy(Employee.name,"John Doe");
  Employee.ID=12345;
  strcpy(Employee.department,"Human resource");
  Employee.salary=55000.50;
  strcpy(Employee.Email,"john.doe@company.com");
  //print the fields
  printf("The employee name is %s \n",Employee.name);
  printf("Employee ID is %d \n",Employee.ID);
  printf("Employee department is %s\n ",Employee.department);
  printf("Employee salary is %f \n",Employee.salary);
 printf("Employee email is %s\n",Employee.Email);
  return 0;
}