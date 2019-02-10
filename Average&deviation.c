#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float randfl(float a, float b);
main()
{
	int s,i;
	float x,a,b,rab,A[100],S,mesh,tap,S2;
 	printf("Dwse enan akeraio\n");
	scanf("%d", &s);
	printf("Dwse katw dekadiko fragma\n");
	scanf("%f", &a);
	printf("Dwse anw dekadiko fragma\n");
	scanf("%f", &b);
	srand(s);
	S=0;
	for(i=0; i<100; i++)
	 {
	 	rab=randfl(a, b);
		A[i]=rab;
		S=S+A[i];
	 }
	 mesh=S/100;
	 for(i=0; i<100; i++)
	  {
	  	S2=S2+(pow((A[i]-mesh), 2));
	  }
	  tap=sqrt(S2/100);
	  printf("H mesh timh einai: %f kai h tupikh apoklish: %f\n", mesh, tap);
	
}

float randfl(float a, float b)
{
	int m,n,r,L;
	float rab, x;
	r=rand();
	x=((float)r)/((float)RAND_MAX);
	rab=(b-a)*x+a;
	return(rab);
}
	 
