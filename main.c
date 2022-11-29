#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_NAME  		20

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct student{
	int 	ID;
	char 	name[MAX_NAME];
	double 	grade;
	
};

int main(void){
	struct student s1 = {2411,"saeyeon",4.3};
	
	s1.ID = 2115;
	strcpy(s1.name,"saesoon");
	s1.grade= 4.1;
	
	printf("ID : %d\n",s1.ID);
	printf("name : %s\n",s1.name);
	printf("grade : %f\n",s1.grade);
	
	return 0;
	
	
}
