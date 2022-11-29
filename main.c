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
	struct student s1;
	
	s1.ID = 2411;
	strcpy(s1.name,"saeyeon");
	s1.grade=4.3;
	
	return 0;
	
	
}
