#include <stdio.h>
#include <string.h>

typedef struct  student{

int age ;
int id ;
char name[100];
} st;

int main()
{

	st s1;

	s1.age = 20;
	s1.id = 10;
	strcpy(s1.name,"Bilal");
	
	printf("Student Info\n");
	printf("Age = %d\n", s1.age);
	printf("ID = %d\n", s1.id);
	printf("Name = %s\n", s1.name);
	
}
