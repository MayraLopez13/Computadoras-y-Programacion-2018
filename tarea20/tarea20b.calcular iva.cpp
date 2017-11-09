#include <stdio.h>
#include "ivalibreria.h" //libreria externa a los archivox de c
int main(){
	
float  pre=0.0f;  
float  subi=0.16f;
float  iva=0.0f;      
    
      printf("\nEscriba el precio del producto: ");
      scanf("%f", &pre);
      printf("\n");
      printf("El valor del IVA del producto es de: %.2f x %.2f = %.2f ",pre,subi,ivacalculo(pre,subi)); //operaciones con la funcion 
      printf("\n\n");
       iva=ivacalculo(pre,subi); //guarda valor en una variable de programa central 
      printf("El valor del producto con el IVA incluido es de: %.2f + %.2f = %.2f",pre,iva,precio(pre,iva));//operaciones con la funcion
      printf("\n\n");
      
     
}
