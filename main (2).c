/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main(){
    
    int horas;
    float sh, sm;
    
    printf("Entre com o salário por hora:  ");
    scanf("%f", &sh);
    printf("Entre com o tempo trabalhado:  ");
    scanf("%d", &horas);
    
    sm = sh * horas;
    
    printf("O salário mensal é igual a: %f ", sm);
    ;

    
}
