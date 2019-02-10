#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct student{
		char ON[256];
		int V;
		int AM;
	};

struct student create_struct_table(int M,struct student students)
{
	students = malloc(M*sizeof(struct student));
	for(i=0; i<M; i++){
		printf(" Dwse Onoma mathiti \n");
		scanf("%s", students[i].ON);
		printf(" Dwse Arithmo Mhtrwou \n");
		scanf("%d", &(students[i].AM));
		printf(" Dwse Varhmologia \n");
		scanf("%d", &(students[i].V));
	}
}

void show_struct_table(int M, struct student students)
{
	int i;
	for(i=0; i<M; i++){
		if(students[i].V < 10){
			printf( "%s \n", students[i].ON); 
		}
	}
}

float compute_average_grade(int M, struct student students)
{
	int i;
	float SV=0;
	for(i=0; i<M; i++){
		SV = SV + (students[i].V);
	}
	return(SV / M);
}

void print_failed_names(int M, struct student students)
{
	int i;
	for(i=0; i<M; i++){
		if(students[i].V < 10){
			printf( " O %s kophke \n", students[i].ON);
		}
	}
}

void change_failed_names(int M,float MV, struct student students)
{
	int i;
	for(i=0; i<M; i++){
		if(students[i].V < 10){
			strcat(students[i].ON, " (failed)"); 
		}
	}
}



int main(){
	int *AM, *V, M,i;
	float MV;
	char ON;
	printf(" Posoi mathites ?\n");
	scanf("%d", &M);
	struct student *students;
	create_struct_table(M, students);
	MV = compute_average_grade(M, students);
	change_failed_names(M, MV, students);
	print_failed_names(M, students);
}
