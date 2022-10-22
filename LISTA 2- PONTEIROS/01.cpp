//Escreva um programa que declare um inteiro, um real e um char, e ponteiros para inteiro, 
//real, e char. Associe as vari´aveis aos ponteiros (use &). Modifique os valores de 
//cada vari´avel usando os ponteiros. Imprima os valores das vari´aveis antes e ap´os as
// modifica¸c˜oes.

#include <stdio.h>

int main()
{
    int i = 1;
    int *ponteiroint = &i;
    
    float f = 0.6;
    float *ponteirofloat = &f;
    
    char c ='a';
    char  *ponteirochar = &c;
    
    printf("Inteiro Antes %i ", *ponteiroint);
    printf("\nReal Antes %f",  *ponteirofloat);
    printf("\nChar Antes  %c \n \n", *ponteirochar);

   *ponteiroint = 2;
   *ponteirofloat = 0.2;
   *ponteirochar = 'b';

    printf("\nInteiro Depois %i ", *ponteiroint);
    printf("\nReal Depois %f",  *ponteirofloat);
    printf("\nChar Depois %c", *ponteirochar);

}