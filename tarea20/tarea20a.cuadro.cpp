#include <stdio.h>


void   cuadrito (int , int ); //funcion prototipo
    
 int main ()  {    // programa central

   int a=0;
   int b=0;
 
    printf("Dame la altura del cuadro : ");
      scanf("%d",&a);
    
      printf("Dame el ancho del cuadro : ");
      scanf("%d",&b);
      
      cuadrito (a,b); // llamada a función
      
      printf ("fin del programa");
	     
  }
void cuadrito (int a, int b) {   //implementacion de la funcion cuadrito
   
    int k=0;
    int j=0;  
    
	
		for (j=1; j<=a; j=j+1) {  
         for (k=1; k<=b; k=k+1){ 
        
         
          printf("*");
 		 }
           printf("\n");
		} 
		
		return ;
}

	       
	 
	 


