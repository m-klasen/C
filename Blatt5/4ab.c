#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student {
	int Matrikelnr;
	char *VName;
	char *NName;
}; 

void student_print(struct student *p){

	printf("\tMatrikelnr: %d\n",p->Matrikelnr);
	printf("\tVorname: %s\n",p->VName);
	printf("\tNachname: %s\n",p->NName);
}


int main(){
 
struct student test = {1234565, "Max" , "Mustermann"};
struct student *p = &test;
student_print(&test);
    
}