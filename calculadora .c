#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    printf("--------------------------\n"); 
    printf("    CALCULADORA EM C\n");
    printf("--------------------------\n");

    setlocale(LC_ALL, "Portuguese"); /// PARA QUE AS LETRAS COM ACENTO FIQUE CERTO 

    
// declaração de vars
    int  num1, num2, soma, sub, mult, div;


    printf("digite um numero   :"); 
     scanf("%i", &num1);

    printf("digite outro numero   :"); 
    scanf("%i", &num2);
   
    

    
    
    soma = num1 + num2;
    sub = num1 - num2;
    mult = num1 * num2;
    div = num1 / num2;
    /////////////// var declaradas

    
   
    printf("os numeros digitados foram %i e %d\n",num1,num2);

     printf("--------------------------------\n"); 


    printf("a soma  dos numeros foi: %i\n", soma);
    //printf("a subtracao dos numeros foi : %d:\n",sub);
    //printf("a multipicacao dos numeros foi %d\n",mult);
    //printf("a divisão  dos numeros foi %i\n",div);

     printf("  _________________\n");
      printf("  |           %i  |             \n",  soma);
    printf("  |_______________|\n");
    printf("  | 0 | 1 | 2 | 3 |\n");
    printf("  -----------------\n");
    printf("  | 4 | 5 | 6 | 7 |\n");
    printf("  -----------------\n");
    printf("  | 8 | 9 | - | + |\n");
    printf("  -----------------\n");
    printf("  | . | /+ |  | / | \n");
    printf("  -----------------\n");
    printf("  | , | * | = | _ |\n");     
    printf("  -----------------\n");
    printf("  |               | \n");
    printf("  -----------------\n");
     
    

    










    return 0;
}




