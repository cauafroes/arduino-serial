/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main()
{
    float valor = 230;
    float porcentagem = round(valor/255 * 100);
    int comprimento = 20;
    int quant = porcentagem * comprimento / 100;
    printf("%.0f\n", valor);
    printf("[");
    for (int i = 0; i<comprimento; i++){
        if(i < quant){
            printf("=");
        }
        else{
            printf(" ");
        }
    }
    printf("] \n");
    
    float valor2 = 100;
    float porcentagem2 = round(valor2/255 * 100);
    int quant2 = porcentagem2 * comprimento / 100;
    printf("%.0f\n", valor2);
    printf("[");
    for (int i = 0; i<comprimento; i++){
        if(i < quant2){
            printf("=");
        }
        else{
            printf(" ");
        }
    }
    printf("] \n");


}

