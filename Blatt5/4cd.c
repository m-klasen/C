#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
	int Matrikelnr;
	char *VName;
	char *NName;
} student;

int i;

student add_student(student **studenten, int Matrikelnr, char *VName, char *NName)
{

studenten[i]->Matrikelnr = 	Matrikelnr;
studenten[i]->VName =		strdup(VName);
studenten[i]->NName =		strdup(NName);

}

void print_students(student **studenten){	
	for (i=0;i<=20;i++)
	{
		printf("\tMatrikelnr: \t%d\n",studenten[i]->Matrikelnr);
		printf("\tVorname: \t%s\n",studenten[i]->VName);
		printf("\tNachname: \t%s\n\n",studenten[i]->NName);	
	}
}

void clear_students(student **studenten){	
for (i = 0; i < 20; ++i)
{
	if (studenten[i] != NULL)
	{
		studenten[i] = NULL;
		free(studenten[i]);
	}
}  
 free(studenten); 
}

void get_name(student **studenten, int Matrikelnr){	
for (i = 0; i < 20; ++i)
{
	if (studenten[i]->Matrikelnr = Matrikelnr)
	{
		printf("\tVorname: \t%s\n",studenten[i]->VName);
		printf("\tNachname: \t%s\n\n",studenten[i]->NName);	
	}
}
}

void remove_student(student **studenten, int Matrikelnr){	
for (i = 0; i < 20; ++i)
{
	if (studenten[i]->Matrikelnr = Matrikelnr)
	{
		studenten[i] = NULL;
		free(studenten[i]);		
	}
}
}

int main(){

student **studenten = malloc(20*sizeof(student));

for (i = 0; i < 20; i++)
{
	studenten[i] = malloc(sizeof(student));
	studenten[i] = NULL;
}


student Max = add_student(studenten, 42,"Max","Musterman");i++;
get_name(studenten,42);
student Philipp = add_student(studenten, 30,"Philipp","Test");
remove_student(studenten,42);
print_students(studenten);
clear_students(studenten);
print_students(studenten);

	return 0;    
}