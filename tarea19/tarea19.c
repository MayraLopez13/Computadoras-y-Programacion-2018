#include <stdio.h>


      int a=0;
      int b=0;

void fncanti(){
	
	 int j=0;
     int k=0;
	 
	for (j=1; j<=a; j=j+1) {  
         for (k=1; k<=b; k=k+1){ 
        
         
          printf("|OuO|");
 		 }
           printf("\n");
		} 
	
}
    
int main ()  {
     	
      

    printf("dame la primera cantidad que deseas para el cuadro: ");
      scanf("%d",&a);
      printf("dame la segunda cantidad que deseas para el cuadro: ");
      scanf("%d",&b);
         
    fncanti();
	    
		    printf("Fin del programa");
	 }
	 
