#include<stdio.h>
int mydiv(int M, int N);
main()
{
 int a, b;
  printf("Dwse 1o arithmo");
  scanf("%d", &a);
  printf("Dwse 2o arithmo");
  scanf("%d", &b);
  printf("Piliko= %d\n", mydiv(a, b));
}         

int mydiv(int M, int N)
{
  int pil;
  if(M*N>0){
     if(N==0){
        pil=0;
     }
     if(N!=0){
      M=M-N;
      pil=1;
      while(M>0){
         M=M-N; 
	 pil=pil+1;
        }
       }
      }
   if(M*N<0){
     if(N==0){
        pil=0;
     }
     if(N!=0){
      M=M+N;
      pil=-1;
      while(M<0){
         M=M+N; 
	 pil=pil-1;
        }
       }
      } 
   return(pil);
}
