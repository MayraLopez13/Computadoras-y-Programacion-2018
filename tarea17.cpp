#include <stdio.h>

using  namespace std;


int main (int argc, char *argv[])  {
	  int var1=5;
	  int var2=2;
	  int resultado=0;
	  
	  
	  //IGUAL a ?
	  resultado=var1 == var2;
	  printf("%d == %d=%d\n", var1,var2,resultado);
	  
	  //MENOR IGUAL QUE ?
	  resultado=var1 <= var2;
	  printf("%d <= %d=%d\n", var1,var2,resultado);
	  
	  //MAYOR QUE ?
	  resultado=var1 > var2;
	  printf("%d > %d=%d\n", var1,var2,resultado);
	  
	  //DIFERENTE DE 
	  resultado=var1 != var2;
	  printf("%d != %d=%d\n", var1,var2,resultado);
	  
	  //USO DE &&
	  resultado = (var1 > var2) && (var1 != var2);
	  printf("(%d > %d) && (%d != %d)=%d\n", var1,var2,var1,var2,resultado);
	
	return 0;
	
	
}
