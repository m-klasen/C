#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>

int i;

struct student {
	int Matrikelnr;
	char *VName;
	char *NName;
}; 

struct student *add_student(int Matrikelnr, char *VName,char *NName){

struct student **studenten = malloc(20*sizeof(struct student));

for (i = 0; i < 20; i++)
{
	studenten[i] =malloc(sizeof(struct student));
}

//studenten[i] = malloc(sizeof(struct student));


studenten[i]->Matrikelnr = 	Matrikelnr;
studenten[i]->VName =		strdup(VName);
studenten[i]->NName =		strdup(NName);

struct student ***p = &studenten;
//(*p)[i]->Matrikelnr = Matrikelnr;
//(*p)[i]->VName = strdup(VName);
//(*p)[i]->NName = strdup(NName);

return (*p)[i];
}

void print_students(){

struct student **studenten = malloc(20*sizeof(struct student));	
//struct student *(*p)[] = &studenten;
struct student ***p = &studenten;	
	for (i=0;i<=20;i++)
	{
		printf("\tMatrikelnr: \t%d\n",(*p)[i]->Matrikelnr);
		printf("\tVorname: \t%s\n",(*p)[i]->VName);
		printf("\tNachname: \t%s\n\n",(*p)[i]->NName);	
	}
}
 
/*void clear_students(struct student **studenten){	
 struct student ***p = &studenten;
for (i = 0; i < 20; ++i)
  {struct student **studenten = malloc(20*sizeof(struct student));
  	free(studenten[i]->Matrikelnr);
  	free(studenten[i]->VName);
  	free(studenten[i]->NName);
  	//free((*p)[i]->Matrikelnr);
  	//free((*p)[i]->VName);
  	//free((*p)[i]->NName);
  }  
  // 	free((*p)); 
 free(studenten); 
}
*/
void get_name(){

}


/*void remove_student(struct student *p){
	free(p->VName);
	free(p->NName);
	free(p);
}*/

int main(struct student **studenten){

	struct student ***p = &studenten;


	struct student *Max = add_student(4232,"Max","Musterman");i++;
	struct student *Philipp = add_student(5324,"Philipp","Test");
	print_students();

	return 0;    
}
